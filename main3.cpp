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
        cout << "����������� �������!" << endl;
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string myString;
    char myChar;
    int insertPosition;
    cout << "������ �����: ";
    getline(cin, myString);
    cout << "������ ������ ��� �������: ";
    cin >> myChar;
    cout << "������ ������� ��� �������: ";
    cin >> insertPosition;
    cout << "����������� �����: " << myString << endl;
    insertChar(myString, myChar, insertPosition);
    cout << "����� ���� �������: " << myString << endl;
    return 0;
}
