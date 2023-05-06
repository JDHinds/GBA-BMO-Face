#include "main.h"

int main()
{
	#define REG_KEYINPUT  (* (volatile int*) 0x4000130)

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

	#define KEY_MASK     0x00F0

	int currentInput = REG_KEYINPUT | KEY_MASK;

	//set GBA rendering context to MODE 3 Bitmap Rendering
	*(unsigned int*)0x04000000 = 0x0403;

	for (int i = 0; i < 38400; i++)
	{ ((unsigned short*)0x06000000)[i] = face5_Map[i]; }

	while (1)
	{
		while (currentInput != (REG_KEYINPUT | KEY_MASK))
		{
			if (currentInput == 0x00F0)
			{ for (int i = 0; i < 38400; i++)
			{ ((unsigned short*)0x06000000)[i] = face5_Map[i]; }}

			else if (currentInput == 0x00B0)
			{ for (int i = 0; i < 38400; i++)
			{ ((unsigned short*)0x06000000)[i] = face1_Map[i]; }}

			currentInput = REG_KEYINPUT | KEY_MASK;
		}
	}
}