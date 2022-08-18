/*  Multi-Switch System Session
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#include "Common/Cpp/Containers/FixedLimitVector.tpp"
#include "NintendoSwitch_MultiSwitchSystemSession.h"

namespace PokemonAutomation{
namespace NintendoSwitch{



void MultiSwitchSystemSession::add_listener(Listener& listener){
    std::lock_guard<std::mutex> lg(m_lock);
    m_listeners.insert(&listener);
}
void MultiSwitchSystemSession::remove_listener(Listener& listener){
    std::lock_guard<std::mutex> lg(m_lock);
    m_listeners.erase(&listener);
}


MultiSwitchSystemSession::~MultiSwitchSystemSession() = default;
MultiSwitchSystemSession::MultiSwitchSystemSession(
    MultiSwitchSystemOption& option,
    uint64_t program_id
)
    : m_option(option)
    , m_program_id(program_id)
    , m_consoles(option.count())
{
    size_t count = option.count();
    for (size_t c = 0; c < count; c++){
        m_consoles.emplace_back(option[c], program_id, c);
    }
}

void MultiSwitchSystemSession::set_switch_count(size_t count){
    std::lock_guard<std::mutex> lg(m_lock);
    for (Listener* listener : m_listeners){
        listener->shutdown();
    }
    m_consoles.reset(count);
    m_option.resize(count);
    for (size_t c = 0; c < count; c++){
        m_consoles.emplace_back(m_option[c], m_program_id, c);
    }
    for (Listener* listener : m_listeners){
        listener->startup(count);
    }
}




}
}
