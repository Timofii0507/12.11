#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[100];
    char ch;
    cout << "������ �����: ";
    cin.getline(str, 100);
    cout << "������ ������� ������: ";
    cin >> ch;
    int count = 0;
    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    cout << "������ '" << ch << "' ����������� � ����� " << count << " ����.\n";
    return 0;
}
