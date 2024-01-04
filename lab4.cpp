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
    cout << "������ �����: ";
    cin >> str;
    if (is_palindrome(str))
    {
        cout << "����� � ����������" << endl;
    }
    else
    {
        cout << "����� �� � ����������" << endl;
    }
    return 0;
}
