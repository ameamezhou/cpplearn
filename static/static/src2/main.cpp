#include <iostream>

struct Entity
{
	// int x, y;
	static int x, y;
	// ����ʵ������������ֵ�޸Ļᵼ�±�����һ���޸ĵ�����
	// void Print()  ��print��ɾ�̬����  ���Ǿ�Ҫע����  ��̬�����ǲ��ܷ��ʷǾ�̬������
	static void Print()
	{
		std::cout << x << "," << y << std::endl;
	};
};

// static ����������Ҫ���������ܸ�ֵ  ��Ȼ�ᱨ��
int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	// Entity e1 = { 5, 8 }; static int ������Ա����ʼ��  ��Ϊx y ������struct����ĳ�Ա��
	Entity e1;
	e1.x = 5;
	e1.y = 6;

	// ��ʵ���ھ�̬�����ʹ������ֱ�� ������  ��Ϊ����ֻ�ᴴ��һ��  ������������������ʹ��  ���������ȫ����
	Entity::x = 9;
	Entity::y = 11;

	e.Print();
	e1.Print();
	Entity::Print();
	std::cin.get();
}