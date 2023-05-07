#include "Intellisense.h"

#define REG_KEYINPUT  (* (volatile unsigned short*) 0x4000130)

#define KEY_A        0x0001
#define KEY_B        0x0002
#define KEY_SELECT   0x0004
#define KEY_START    0x0008
#define KEY_RIGHT    0x0010
#define KEY_LEFT     0x0020
#define KEY_UP       0x0040
#define KEY_DOWN     0x0080
#define KEY_R        0x0100
#define KEY_L        0x0200

#define KEY_MASK     0xFC00

extern const int face1_Map[];
extern const int face2_Map[];
extern const int face3_Map[];
extern const int face4_Map[];
extern const int face5_Map[];
extern const int face6_Map[];
extern const int face7_Map[];
extern const int face8_Map[];
extern const int face9_Map[];