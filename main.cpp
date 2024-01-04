#include <iostream>
#include <algorithm>
#include <Windows.h>

using namespace std;

void delete_char(char* str) 
{
    cout << "¬вед≥ть р€док: ";
    cin >> str;
    int len = strlen(str);
    if (len == 0) 
    {
        return;
    }
    int pos;
    cout << "¬вед≥ть номер символу, €кий потр≥бно видалити: ";
    cin >> pos;
    for (int i = pos; i < len - 1; i++) 
    {
        str[i] = str[i + 1];
    }
    str[len - 1] = '\0';
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[100];
    delete_char(str);
    cout << str << endl;
    return 0;
}

