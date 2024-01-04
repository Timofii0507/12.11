#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void insertChar(string& str, char ch, int position)
{
    if (position >= 0 && position <= str.length())
    {
        str.insert(position, 1, ch);
    }
    else 
    {
        cout << "Неправильна позиція!" << endl;
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string myString;
    char myChar;
    int insertPosition;
    cout << "Введіть рядок: ";
    getline(cin, myString);
    cout << "Введіть символ для вставки: ";
    cin >> myChar;
    cout << "Введіть позицію для вставки: ";
    cin >> insertPosition;
    cout << "Оригінальний рядок: " << myString << endl;
    insertChar(myString, myChar, insertPosition);
    cout << "Рядок після вставки: " << myString << endl;
    return 0;
}
