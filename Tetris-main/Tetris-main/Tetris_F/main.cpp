#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif // !DBG_NEW
#endif
//
#include "Game.h"


int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Game game;
	game.Run();

	return 0;
}

// ���� �� ��
// - �޸� ���� üũ
// - �� / ��� ���� �������� �ʱ�ȭ ���� ����
// - ������ ������ (Ű �Է�)
// - ���� ���� ���� ����
// - ���丮 ����
// - ���丮 UI ����
// - ���� �÷��� ���丮 UI ���� (���� ����â/�� ���� ��)
// - ��� �����̽� ������ ���� �ؿ����� �������� ��
// - ��� ���� Ŭ���� ����Ʈ �߰�