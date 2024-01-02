#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[100];
    int count_letters = 0;
    int count_digits = 0;
    int count_other = 0;
    cout << "Введіть рядок: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isalpha(str[i])) 
        {
            count_letters++;
        }
        else if (isdigit(str[i])) 
        {
            count_digits++;
        }
        else 
        {
            count_other++;
        }
    }
    cout << "Кількість літер: " << count_letters << endl;
    cout << "Кількість цифр: " << count_digits << endl;
    cout << "Кількість інших символів: " << count_other << endl;
    return 0;
}