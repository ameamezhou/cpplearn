#include <iostream>

class Entity
{
public:
	float X, Y, Z;

	void Move(float xa, float ya, float za)
	{
		X += xa;
		Y += ya;
		Z += za;
	}
};

/*
class Player
{
public:
	float X, Y, Z;
	const char* Name;

	void Move(float xa, float ya, float za)
	{
		X += xa;
		Y += ya;
		Z += za;
	}

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};
��Ҫ�ﵽ���Ŀ��  �������entity�Ļ��ͻ��кܶ���븴��ճ�� �ظ���  �������������ü̳�
*/

class Player : public Entity
{
public:
	const char* Name;

	void PrintName() 
	{
		std::cout << Name << std::endl;
	}
};

// ��������Ҫ֪�� Player ���������������ֻ��Player ��Ҳ�� Entity  �������ǿ������κ�
// ��Ҫʹ��Entity�ĵط�ʹ��Player  ������Ϊ Player ӵ�� Entity ��ӵ�е�һ�У��ٶ��һ��㶫��
// Player ˵���׾���һ�� Entity�ĳ���
// ��ζ�����������ܼ�һ����ӡEntity����Ķ������� ����ͨ������ XYZ �������������ӡ������̨
// �ҿ��Դ���Player����Entity����Ϊ�����ĺ�����
// ��ΪPlayer �����˵ Player ���� ��֤����XYZ  ��Ϊ���̳��� Entity
//

int main() 
{
	std::cout << sizeof(Entity) << std::endl;
	// ������������Ϊ12
	// ��Ϊ������ռ4���ֽ�  ����һ����3��������  �������Ĵ�СΪ8

	std::cout << sizeof(Player) << std::endl;
	// Player ����Ƕ�����  ����ֻ�� const char* ���͵��ڴ��С  Ҳ����8���ֽ� ��Ϊ����x64��ϵͳ x32 ��4�ֽ�
	// ��������֪���̳��� entity  ��������16�ֽ�
	//

	Player player;
	player.X = 2;
	player.Y = 3;
	player.Z = 4;
	player.Move(5, 5, 5);
	player.PrintName();
	std::cin.get();
}