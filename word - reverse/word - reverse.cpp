#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "");

    string word;

    cout << "Введіть слово, яке потрібно записати навпаки: " << endl;
    cin >> word;

    reverse(word.begin(), word.end());

    ofstream file("output.txt"); 
    if (file.is_open()) {
        file << word;
        file.close();
        cout << "Слово записано у файл 'output.txt' у зворотному порядку." << endl;
    }
    else {
        cout << "Невдалося відкрити файл:(" << endl;
    }

    return 0;
}

