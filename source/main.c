#include "main.h"

int main(void)
{
	//set GBA rendering context to MODE 3 Bitmap Rendering
	*(unsigned int*)0x04000000 = 0x0403;

	int input = REG_KEYINPUT;

	while (1)
	{		
		int input = REG_KEYINPUT;

		if (!(input & KEY_UP))
		{
			if (!(input & KEY_LEFT))
			{
				for (int i = 0; i < 38400; i++)
				{ ((unsigned short*)0x06000000)[i] = face1_Map[i]; }
			}
			else if (!(input & KEY_RIGHT))
			{
				for (int i = 0; i < 38400; i++)
				{ ((unsigned short*)0x06000000)[i] = face3_Map[i]; }
			}
			else
			{
				for (int i = 0; i < 38400; i++)
				{ ((unsigned short*)0x06000000)[i] = face2_Map[i]; }
			}
		}

		else if (!(input & KEY_DOWN))
		{
			if (!(input & KEY_LEFT))
			{
				for (int i = 0; i < 38400; i++)
				{ ((unsigned short*)0x06000000)[i] = face7_Map[i]; }
			}
			else if (!(input & KEY_RIGHT))
			{
				for (int i = 0; i < 38400; i++)
				{ ((unsigned short*)0x06000000)[i] = face9_Map[i]; }
			}
			else
			{
				for (int i = 0; i < 38400; i++)
				{ ((unsigned short*)0x06000000)[i] = face8_Map[i]; }
			}
		}

		else if (!(input & KEY_LEFT))
		{
			for (int i = 0; i < 38400; i++)
			{ ((unsigned short*)0x06000000)[i] = face4_Map[i]; }
		}
		else if (!(input & KEY_RIGHT))
		{
			for (int i = 0; i < 38400; i++)
			{ ((unsigned short*)0x06000000)[i] = face6_Map[i]; }
		}

		else 
		{
			for (int i = 0; i < 38400; i++)
			{ ((unsigned short*)0x06000000)[i] = face5_Map[i]; }
		}

		while (input == REG_KEYINPUT)
		{}
	}
}