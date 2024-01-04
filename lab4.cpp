#include <iostream>
#include <Windows.h>

using namespace std;

bool is_palindrome(string str)
{
    string reversed_str = str; 
    reverse(reversed_str.begin(), reversed_str.end());
    return str == reversed_str;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    cout << "Введіть рядок: ";
    cin >> str;
    if (is_palindrome(str))
    {
        cout << "Рядок є паліндромом" << endl;
    }
    else
    {
        cout << "Рядок не є паліндромом" << endl;
    }
    return 0;
}
