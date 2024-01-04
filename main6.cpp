#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s[100];
    int letters = 0, digits = 0, others = 0;
    cout << "Введіть рядок: ";
    cin.getline(s, 100);
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z') 
        {
            letters++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            letters++;
        }
        else if (s[i] >= '0' && s[i] <= '9') 
        {
            digits++;
        }
        else 
        {
            others++;
        }
    }
    cout << "Кількість літер: " << letters << endl;
    cout << "Кількість цифр: " << digits << endl;
    cout << "Кількість інших символів: " << others << endl;
    return 0;
}
