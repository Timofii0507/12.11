#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int letters = 0;
	int digits = 0;
	int other_symbols = 0;
	char str[100];
	cout << "������ �����: ";
	cin.getline(str, 100);
	for (int i = 0; str[i] != '\0'; i++) 
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '�' && str[i] <= '�') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '�' && str[i] <= '�')) 
		{
			letters++;
		}
		if (str[i] >= '0' && str[i] <= '9' && str[i] != '�' && str[i] != '�') 
		{
			digits++;
		}
		if ((str[i] == '!' || str[i] == '?' || str[i] == ',' || str[i] == '.' || str[i] == ';' || str[i] == ':' || str[i] == '-' || str[i] == '=' || str[i] == '+' || str[i] == '*' || str[i] == '/' || str[i] == '"')) 
		{
			other_symbols++;
		}
	}
	cout << "ʳ������ ����: " << letters << endl;
	cout << "ʳ������ ����: " << digits << endl;
	cout << "ʳ������ ����� �������: " << other_symbols << endl;
	return 0;
}
