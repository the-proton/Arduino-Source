/*  Device Settings
 * 
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 * 
 */

#ifndef PokemonAutomation_DeviceSettings_H
#define PokemonAutomation_DeviceSettings_H

#include <stdbool.h>
#include <stdint.h>

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Board Type (for LEDs)

//#define BOARD_TYPE_UNKNOWN      0
//#define BOARD_TYPE_UNO          1
//#define BOARD_TYPE_PRO_MICRO    2
//#define BOARD_TYPE_TEENSY2      3

//extern const int BOARD_TYPE;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  User Callbacks

void start_program_callback(void);
void end_program_callback(void);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
