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
    cout << "Введіть рядок: ";
    string myString;
    getline(cin, myString);
    cout << "Введіть символ, який потрібно видалити: ";
    char charToRemove;
    cin >> charToRemove;
    removeChar(myString, charToRemove);
    cout << "Рядок після видалення символу '" << charToRemove << "': " << myString << endl;
    return 0;
}
