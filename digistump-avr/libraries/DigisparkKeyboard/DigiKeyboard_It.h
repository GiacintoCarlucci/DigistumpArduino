#include "DigiKeyboard.h"
#ifndef DIGIKEYBOARDIT_H
#define DIGIKEYBOARDIT_H


#define IT_MOD_CONTROL_LEFT    (1<<8)
#define IT_MOD_SHIFT_LEFT      (1<<9)
#define IT_MOD_ALT_LEFT        (1<<10)
#define IT_MOD_GUI_LEFT        (1<<11)
#define IT_MOD_CONTROL_RIGHT   (1<<12)
#define IT_MOD_SHIFT_RIGHT     (1<<13)
#define IT_MOD_ALT_RIGHT       (1<<14)
#define IT_MOD_GUI_RIGHT       (1<<15)
const uint16_t _ascii_it_map[128] PROGMEM =
        {
                0x00,//----------------------- NUL
                0x00,//----------------------- SOH
                0x00,//----------------------- STX
                0x00,//----------------------- ETX
                0x00,//----------------------- EOT
                0x00,//----------------------- ENQ
                0x00,//----------------------- ACK
                0x00,//----------------------- BEL
                0x2a,//----------------------- BS BACKSPACE
                0x2b,//----------------------- TAB
                0x28,//----------------------- LF ENTER
                0x00,//----------------------- VT
                0x00,//----------------------- FF
                0x00,//----------------------- CR
                0x00,//----------------------- SO
                0x00,//----------------------- SI
                0x00,//----------------------- DEL
                0x00,//----------------------- DC1
                0x00,//----------------------- DC2
                0x00,//----------------------- DC3
                0x00,//----------------------- DC4
                0x00,//----------------------- NAK
                0x00,//----------------------- SYN
                0x00,//----------------------- ETB
                0x00,//----------------------- CAN
                0x00,//----------------------- EM
                0x00,//----------------------- SUB
                0x00,//----------------------- ESC
                0x00,//----------------------- FS
                0x00,//----------------------- GS
                0x00,//----------------------- RS
                0x00,//----------------------- US
                0x2c,//----------------------- ' ' SPACEBAR
                0x1e|IT_MOD_SHIFT_LEFT,//----- !
                0x1F|IT_MOD_SHIFT_LEFT,//----- "
                0x20|IT_MOD_SHIFT_LEFT,//----- £
                0x21|IT_MOD_SHIFT_LEFT,//----- $
                0x22|IT_MOD_SHIFT_LEFT,//----- %
                0x23|IT_MOD_SHIFT_LEFT,//----- &
                0x2D,//----------------------- '
                0x25|IT_MOD_SHIFT_LEFT,//----- (
                0x26|IT_MOD_SHIFT_LEFT,//----- )
                0x30|IT_MOD_SHIFT_LEFT,//----- *
                0x30,//----------------------- +
                0x36,//----------------------- ,
                0x38,//----------------------- -
                0x37,//----------------------- .
                0x24|IT_MOD_SHIFT_LEFT,//----- /
                0x27,//----------------------- 0
                0x1e,//----------------------- 1
                0x1f,//----------------------- 2
                0x20,//----------------------- 3
                0x21,//----------------------- 4
                0x22,//----------------------- 5
                0x23,//----------------------- 6
                0x24,//----------------------- 7
                0x25,//----------------------- 8
                0x26,//----------------------- 9
                0x37|IT_MOD_SHIFT_LEFT,//----- :
                0x36|IT_MOD_SHIFT_LEFT,//----- ;
                0x64,//----------------------- <
                0x27|IT_MOD_SHIFT_LEFT,//----- =
                0x64|IT_MOD_SHIFT_LEFT,//----- >
                0x2D|IT_MOD_SHIFT_LEFT,//----- ?
                0x14|IT_MOD_ALT_RIGHT,//------ @ 0x40 0x14
                0x04|IT_MOD_SHIFT_LEFT,//----- A
                0x05|IT_MOD_SHIFT_LEFT,//----- B
                0x06|IT_MOD_SHIFT_LEFT,//----- C
                0x07|IT_MOD_SHIFT_LEFT,//----- D
                0x08|IT_MOD_SHIFT_LEFT,//----- E
                0x09|IT_MOD_SHIFT_LEFT,//----- F
                0x0a|IT_MOD_SHIFT_LEFT,//----- G
                0x0b|IT_MOD_SHIFT_LEFT,//----- H
                0x0c|IT_MOD_SHIFT_LEFT,//----- I
                0x0d|IT_MOD_SHIFT_LEFT,//----- J
                0x0e|IT_MOD_SHIFT_LEFT,//----- K
                0x0f|IT_MOD_SHIFT_LEFT,//----- L
                0x10|IT_MOD_SHIFT_LEFT,//----- M
                0x11|IT_MOD_SHIFT_LEFT,//----- N
                0x12|IT_MOD_SHIFT_LEFT,//----- O
                0x13|IT_MOD_SHIFT_LEFT,//----- P
                0x14|IT_MOD_SHIFT_LEFT,//----- Q
                0x15|IT_MOD_SHIFT_LEFT,//----- R
                0x16|IT_MOD_SHIFT_LEFT,//----- S
                0x17|IT_MOD_SHIFT_LEFT,//----- T
                0x18|IT_MOD_SHIFT_LEFT,//----- U
                0x19|IT_MOD_SHIFT_LEFT,//----- V
                0x1a|IT_MOD_SHIFT_LEFT,//----- W
                0x1b|IT_MOD_SHIFT_LEFT,//----- X
                0x1c|IT_MOD_SHIFT_LEFT,//----- Y
                0x1d|IT_MOD_SHIFT_LEFT,//----- Z
                0x25|IT_MOD_ALT_RIGHT,//------ [
                0x35,//----------------------- \ BACKSLASH
                0x26|IT_MOD_ALT_RIGHT,//------ ]
                0x2e|IT_MOD_SHIFT_LEFT,//----- ^
                0x38|IT_MOD_SHIFT_LEFT,//----- _
                0x2d|IT_MOD_ALT_RIGHT,//------ `
                0x04,//----------------------- a
                0x05,//----------------------- b
                0x06,//----------------------- c
                0x07,//----------------------- d
                0x08,//----------------------- e
                0x09,//----------------------- f
                0x0a,//----------------------- g
                0x0b,//----------------------- h
                0x0c,//----------------------- i
                0x0d,//----------------------- j
                0x0e,//----------------------- k
                0x0f,//----------------------- l
                0x10,//----------------------- m
                0x11,//----------------------- n
                0x12,//----------------------- o
                0x13,//----------------------- p
                0x14,//----------------------- q
                0x15,//----------------------- r
                0x16,//----------------------- s
                0x17,//----------------------- t
                0x18,//----------------------- u
                0x19,//----------------------- v
                0x1a,//----------------------- w
                0x1b,//----------------------- x
                0x1c,//----------------------- y
                0x1d,//----------------------- z
                0x24|IT_MOD_ALT_RIGHT,//------ {
                0x35|IT_MOD_SHIFT_LEFT,//----- |
                0x27|IT_MOD_ALT_RIGHT,//------ }
                0x2e|IT_MOD_ALT_RIGHT,//------ ~
                0//--------------------------- DEL
        };

class DigiKeyboardDeviceIt : public DigiKeyboardDevice{
    public:
    size_t write(uint8_t chr) {
        unsigned int temp = pgm_read_word_near(_ascii_it_map + chr);
        unsigned char low = temp & 0xFF;
        unsigned char high = (temp >> 8) & 0xFF;
        sendKeyStroke(low,high);
        return 1;
    }
    void sendKeyReport(uchar *array,const unsigned int size){
        while (!usbInterruptIsReady()) {
            // Note: We wait until we can send keyPress
            //       so we know the previous keyPress was
            //       sent.
            usbPoll();
            _delay_ms(5);
        }

        usbSetInterrupt(array, size);
    }
};
DigiKeyboardDeviceIt DigiKeyboardIt = DigiKeyboardDeviceIt();
#endif //DIGIKEYBOARDIT_H
