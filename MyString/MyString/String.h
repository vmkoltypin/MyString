#pragma once
class String
{
private:
	char* str;
	int n;
public:
	String();
	String(const String& s);
	String(char* s);
	String(const char* s);
};

//принимаем только строку в cpp пишем, смотрим на длину строки и передаём
//в стр с найденой длиной строки 