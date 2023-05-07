#include "main.h"

int main(void)
{
	//set GBA rendering context to MODE 3 Bitmap Rendering
	*(unsigned int*)0x04000000 = 0x0403;

	while (1)
	{		
		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face1_Map[i]; }
		
		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face2_Map[i]; }

		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face3_Map[i]; }

		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face4_Map[i]; }

		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face5_Map[i]; }
        
		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face6_Map[i]; }

		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face7_Map[i]; }

		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face8_Map[i]; }

		for (int i = 0; i < 38400; i++)
		{ ((unsigned short*)0x06000000)[i] = face9_Map[i]; }
	}
}