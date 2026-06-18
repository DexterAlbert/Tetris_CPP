#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        gotoxy(i * 2, 5);
        cout << "*";
        Sleep(200);
    }
    return 0;
}