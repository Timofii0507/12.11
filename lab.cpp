#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������ �����: ";
    string inputString;
    getline(cin, inputString);
    for (char& ch : inputString)
    {
        if (ch == ' ')
        {
            ch = '\t';
        }
    }
    cout << "������� �����: " << inputString << endl;
    return 0;
}