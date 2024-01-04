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
	cout << "Ââåä³òü ðÿäîê: ";
	cin.getline(str, 100);
	for (int i = 0; str[i] != '\0'; i++) 
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'À' && str[i] <= 'ß') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'à' && str[i] <= 'ÿ')) 
		{
			letters++;
		}
		if (str[i] >= '0' && str[i] <= '9' && str[i] != 'À' && str[i] != 'à') 
		{
			digits++;
		}
		if ((str[i] == '!' || str[i] == '?' || str[i] == ',' || str[i] == '.' || str[i] == ';' || str[i] == ':' || str[i] == '-' || str[i] == '=' || str[i] == '+' || str[i] == '*' || str[i] == '/' || str[i] == '"')) 
		{
			other_symbols++;
		}
	}
	cout << "Ê³ëüê³ñòü ë³òåð: " << letters << endl;
	cout << "Ê³ëüê³ñòü öèôð: " << digits << endl;
	cout << "Ê³ëüê³ñòü ³íøèõ ñèìâîë³â: " << other_symbols << endl;
	return 0;
}
