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

ostream& operator<<(ostream& a, const String& s)
{
	return a << s.str;
}

istream& operator>>(istream& a, String& s)
{
	this->n = s.n;
	this->str = new char[n + 1];
	strcpy_s(str, n + 1, s.str);
	char arr[1000];
	a.getline(arr,1000);
	if (s.str)delete[]s.str;
	return a;
}
