#include "String.h"
#include <iostream>


String::String()
{
	str = NULL;
	n = 0;
}

String::String(const String& s)
{
	n = s.n;
	str = new char[n + 1];
	strcpy_s(str, n + 1, s.str);
}

String::String(char* s)
{
	n = strlen(s);
	str = new char[n + 1];
	strcpy_s(str, n + 1, s);
}

String::String(const char* s)
{
	n = strlen(s);
	str = new char[n + 1];
	strcpy_s(str, n + 1, s);
}
