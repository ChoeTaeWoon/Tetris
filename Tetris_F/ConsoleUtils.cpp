#include "ConsoleUtils.h"

void ConsoleUtils::gotoxy(int x, int y)
{
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ConsoleUtils::setColor(GameColor foregroundColor, GameColor backgroundColor)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Windows API���� ���� ���� (���� << 4) | ����� ���·� ���յ˴ϴ�.
    SetConsoleTextAttribute(hConsole, static_cast<int>(foregroundColor) | (static_cast<int>(backgroundColor) << 4));
}

void ConsoleUtils::hideCursor()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void ConsoleUtils::showCursor()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = TRUE;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void ConsoleUtils::clearScreen()
{
    system("cls");
}

void ConsoleUtils::sleep(int milliseconds)
{
    Sleep(milliseconds);
}
