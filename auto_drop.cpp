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
    system("chcp 65001"); // 把控制台编码改成UTF-8，让 ■ 正常显示
    int x = 5;
    int y = 5;
    for (int i = 0; i < 10; i++)
    {
        if (y > 10)
        {
            break; // 如果方块超出底部边界，停止下落
        }
        gotoxy(x, y);
        cout << "■";
        Sleep(500);

        gotoxy(x, y);
        cout << "  ";
        y = y + 1;
    }

    return 0;
}