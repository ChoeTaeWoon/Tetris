#include "InputHandler.h"
#include "Config.h"
#include <conio.h> // _getch()
#include <iostream>

int InputHandler::GetKeyPressed() const
{
    if (_kbhit())
    {
        int key = _getch();

        if (key == Config::EXT_KEY)
        {
            key = _getch();

            while (_kbhit()) {
                _getch();
            }
        }

        std::cout << "���� Ű �ڵ�: " << key << std::endl;
        return key;

    }
    return 0; // Ű �Է� ����
}
