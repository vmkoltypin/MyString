#pragma once
#include <ostream>
using namespace std;
class String
{
private:
	char* str;
	int n;
public:
	String();
	String(const String& s);//
	String(char* s);
	String(const char* s);
	friend ostream& operator<< (ostream& a, const String& s);
	friend istream& operator>> (istream& a, String& s);
};