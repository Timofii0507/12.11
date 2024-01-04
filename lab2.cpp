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
	cout << "Введіть рядок: ";
	cin.getline(str, 100);
	for (int i = 0; str[i] != '\0'; i++) 
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'А' && str[i] <= 'Я') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'а' && str[i] <= 'я')) 
		{
			letters++;
		}
		if (str[i] >= '0' && str[i] <= '9' && str[i] != 'А' && str[i] != 'а') 
		{
			digits++;
		}
		if ((str[i] == '!' || str[i] == '?' || str[i] == ',' || str[i] == '.' || str[i] == ';' || str[i] == ':' || str[i] == '-' || str[i] == '=' || str[i] == '+' || str[i] == '*' || str[i] == '/' || str[i] == '"')) 
		{
			other_symbols++;
		}
	}
	cout << "Кількість літер: " << letters << endl;
	cout << "Кількість цифр: " << digits << endl;
	cout << "Кількість інших символів: " << other_symbols << endl;
	return 0;
}
