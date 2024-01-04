#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "¬вед≥ть р€док: ";
    string inputString;
    getline(cin, inputString);
    for (char& ch : inputString)
    {
        if (ch == ' ')
        {
            ch = '\t';
        }
    }
    cout << "«м≥нений р€док: " << inputString << endl;
    return 0;
}