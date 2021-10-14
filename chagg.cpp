#include <iostream>
#include <unistd.h>
#include <fstream>
#include <windows.h>

using namespace std;

void loading()
{
    HANDLE hConsoleColor;
    hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleColor, 242);
    unsigned int misec = 10000;
    for (int i = 1; i <= 100; i++)
    {

        cout << "Dang tai: " << i << "%" << endl; 
        usleep(7 * misec);
    }
}

int main()
{
    HANDLE hConsoleColor;
    hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    unsigned int misec = 10000;
    string n; string s;
    SetConsoleTextAttribute(hConsoleColor, 249);
    cout << "Nhap ngay sinh cua cau: ";
    cin >> n;
    system("cls");
    SetConsoleTextAttribute(hConsoleColor, 253);
    cout << "Happy Birthday Changgg !";
    usleep(150 * misec);
    system("cls");
    loading();
    system("cls");
    SetConsoleTextAttribute(hConsoleColor, 246);
    ifstream file;
    file.open("image.txt", ios::in);
    string line;
    usleep(100 * misec);
    for (int k = 1; k <= 201; k++)
    {
        getline(file, line);
        cout << line << endl;
        usleep(15 * misec);
    }
    file.close();
    system("pause");
    return 0;
}                                            