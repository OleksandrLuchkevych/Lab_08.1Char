#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* s)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strchr(s + pos, '.'))
	{
		pos = t - s + 1;
		k++;
		if (k == 3)
			return pos;
	}
	return 0;
}
char* Change(char* s) // s = вказівник на початок рядка
{
	int len = int(strlen(s) * 1. / 1 + 1 );
	char* t = new char[len];
	
	strcpy_s(t, len, s);
	
	for (int i = 3; t[i] != '\0'; i += 4)
	{	
		t[i] = '.';
	}	
	
	return t;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Index of 3rd dot: " << Count(str)<< endl;
	char* dest = new char[151];

	dest = Change(str);
	cout << "Initial string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}