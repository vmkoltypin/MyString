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
	char arr[1000];
	a.getline(arr,1000);
	if (s.str)delete[]s.str;
	s.n=strlen(arr);
	s.str = new char[s.n + 1];
	strcpy_s(s.str, s.n + 1, arr);
	return a;
}
