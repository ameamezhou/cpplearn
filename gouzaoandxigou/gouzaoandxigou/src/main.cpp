#include <iostream>

class Entity
{
public:
	int x, y;
	// ���캯��������ͬ��
	Entity() {
		std::cout << "init success" << std::endl;
		// ��������þ��������ǿ��Գ�ʼ��һЩ����  ��Щ������������ͨ�����캯�����г�ʼ��
		x = 1;
		y = 2;
	};

	// ����������� ~
	~Entity() {
		std::cout << "destroy" << std::endl;
	};
};

// ����Ҫ������ڴ���ɾ�������  ���������½�һ�������ڵľֲ��������ں���������ʱ��Ὣ�ǿ��ڴ�ݻٻ���
void func()
{
	Entity e;
	std::cout << "x: " << e.x << "," << "y: " << e.y << std::endl;
};

int main() {
	func();
	std::cin.get();
}