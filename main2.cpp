#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void removeChar(string& str, char ch)
{
    for (auto it = str.begin(); it != str.end(); )
    {
        if (*it == ch) 
        {
            it = str.erase(it);
        }
        else {
            ++it;
        }
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������ �����: ";
    string myString;
    getline(cin, myString);
    cout << "������ ������, ���� ������� ��������: ";
    char charToRemove;
    cin >> charToRemove;
    removeChar(myString, charToRemove);
    cout << "����� ���� ��������� ������� '" << charToRemove << "': " << myString << endl;
    return 0;
}
