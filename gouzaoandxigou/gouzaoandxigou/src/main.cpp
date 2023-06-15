#include <iostream>

class Entity
{
public:
	int x, y;
	// 构造函数与类名同名
	Entity() {
		std::cout << "init success" << std::endl;
		// 这里的作用就是让我们可以初始化一些变量  有些基础变量可以通过构造函数进行初始化
		x = 1;
		y = 2;
	};

	// 析构函数多个 ~
	~Entity() {
		std::cout << "destroy" << std::endl;
	};
};

// 由于要看类从内存中删除的情况  所以我们新建一个函数内的局部变量，在函数结束的时候会将那块内存摧毁回收
void func()
{
	Entity e;
	std::cout << "x: " << e.x << "," << "y: " << e.y << std::endl;
};

int main() {
	func();
	std::cin.get();
}