#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string sentence;
    cout << "Введіть речення: ";
    getline(cin, sentence);
    sort(sentence.begin(), sentence.end());
    int wordCount = 0;
    for (size_t i = 0; i < sentence.size(); ++i) 
    {
        if (sentence[i] == ' ' && i != 0) 
        {
            wordCount++;
        }
    }
    wordCount++;
    cout << "Кількість слів у введеному реченні: " << wordCount << endl;
    return 0;
}
