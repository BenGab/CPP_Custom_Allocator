#pragma once
#include<iostream>
#include<stdlib.h>
#include<string.h>

#define MAXNAMES 5
#define MAXNAME 25
class CName
{
public:
	CName(const char* s) { strncpy(m_szName, s, MAXNAME ); }
	void Display() const { std::cout << m_szName; }
	void* operator new(size_t size);
	void operator delete(void* ptr);
private:
	char m_szName[MAXNAME + 1];
};