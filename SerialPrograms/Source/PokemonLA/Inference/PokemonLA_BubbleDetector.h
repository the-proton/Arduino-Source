/*  Bubble Detector
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#ifndef PokemonAutomation_PokemonLA_BubbleDetector_H
#define PokemonAutomation_PokemonLA_BubbleDetector_H

#include <list>
#include "PokemonLA_WhiteObjectDetector.h"

namespace PokemonAutomation{
namespace NintendoSwitch{
namespace PokemonLA{


class BubbleDetector : public WhiteObjectDetector{
public:
    BubbleDetector();
    virtual void process_object(const QImage& image, const WaterfillObject& object) override;
    virtual void finish() override;
};



}
}
}
#endif
