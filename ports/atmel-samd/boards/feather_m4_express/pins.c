#include "samd21_pins.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_AREF), MP_ROM_PTR(&pin_PA03) },

    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_PA17) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_PA19) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_PA18) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA12) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA13) },
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_PA14) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_PA15) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_PA16) },
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_PA20) },
    { MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_PA21) },
    { MP_ROM_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_PB23) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);