/*  Audio Device Info
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#include <QImage>
#include "Common/Cpp/AlignedVector.tpp"
#include "Spectrograph.h"

namespace PokemonAutomation{


Spectrograph::~Spectrograph(){}
Spectrograph::Spectrograph(size_t buckets, size_t frames)
    : m_buckets(buckets)
    , m_frames(frames)
    , m_buffer(buckets * frames)
{
    memset(m_buffer.data(), 0, m_buffer.size() * sizeof(uint32_t));
}
void Spectrograph::push_spectrum(const uint32_t* spectrum){
    uint32_t* ptr = m_buffer.data() + m_current_index;
    for (size_t c = 0; c < m_buckets; c++){
        ptr[0] = spectrum[c];
        ptr += m_frames;
    }
    m_current_index++;
    if (m_current_index >= m_frames){
        m_current_index = 0;
    }
}
QImage Spectrograph::to_image() const{
    QImage image((int)m_frames, (int)m_buckets, QImage::Format_RGB32);
    size_t bytes_per_line = image.bytesPerLine();
    uint32_t* dst = (uint32_t*)image.bits();
    const uint32_t* src = m_buffer.data();

    size_t frames = m_frames;
    size_t front = m_current_index;
    size_t back = frames - front;
    for (size_t c = 0; c < m_buckets; c++){
        memcpy(dst, src + front, back * sizeof(uint32_t));
        memcpy(dst + back, src, front * sizeof(uint32_t));
        src += frames;
        dst = (uint32_t*)((char*)dst + bytes_per_line);
    }

    return image;
}





}
