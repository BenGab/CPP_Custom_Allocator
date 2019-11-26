#include "CName.h"
char memory[MAXNAMES][sizeof(CName)];
int freendex[MAXNAMES];

void * CName::operator new(size_t size)
{
	for (int i = 0; i < MAXNAMES; i++)
	{
		if (freendex[i] == 0)
		{
			freendex[i] = 1;
			return memory[i];
		}
	}
	return nullptr;
}

void CName::operator delete(void * ptr)
{
	for (int i = 0; i < MAXNAMES; i++)
	{
		if (memory[i] == ptr)
		{
			freendex[i] = 0;
		}
	}
}
