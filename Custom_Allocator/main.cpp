#include<iostream>
#include "CName.h"
int main()
{
	CName* names[MAXNAMES];
	char name[MAXNAME];

	for (int i = 0; i < MAXNAMES; i++)
	{
		std::cout << "input name:\n";
		std::cin >> name;
		names[i] = new CName(name);
	}

	for (int i = 0; i < MAXNAMES; i++)
	{
		names[i]->Display();
		delete names[i];
	}
}