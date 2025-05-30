#pragma once
//#include "Point.h"

namespace Config
{
    const int EXT_KEY = 0xE0;     // Ȯ�� Ű prefix
    const int KEY_UP = 0x48;      // �� ����Ű
    const int KEY_LEFT = 0x4B;    // ���� ����Ű
    const int KEY_RIGHT = 0x4D;   // ������ ����Ű
    const int KEY_DOWN = 0x50;    // �Ʒ� ����Ű
    const int KEY_SPACE = 0x20;   // �����̽���
    const int KEY_ESC = 0x1B;     // ESC Ű (��: ����/�Ͻ�����)

    const int NUM_SHAPES = 7;         // �� ��� ��� ����
    const int NUM_ROTATIONS = 4;      // �� ����� �ִ� ȸ�� ��
    const int BLOCK_GRID_SIZE = 4;    // �� ����� ǥ���ϴ� �׸��� ũ�� (4x4)

    extern const char TETROMINO_SHAPES[NUM_SHAPES][NUM_ROTATIONS][BLOCK_GRID_SIZE][BLOCK_GRID_SIZE];
}