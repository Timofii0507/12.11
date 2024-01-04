#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string inputString;
    cout << "¬вед≥ть р€док тексту: ";
    getline(cin, inputString);
    for (char& ch : inputString) 
    {
        if (ch == '.') 
        {
            ch = '!';
        }
    }
    cout << "«м≥нений р€док: " << inputString << endl;
    return 0;
}
