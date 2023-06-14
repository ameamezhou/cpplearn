#include <iostream>

struct Entity
{
	// int x, y;
	static int x, y;
	// 下面实例化的两个的值修改会导致变成最后一次修改的样子
	// void Print()  当print变成静态方法  我们就要注意了  静态方法是不能访问非静态变量的
	static void Print()
	{
		std::cout << x << "," << y << std::endl;
	};
};

// static 的内容我们要先声明才能赋值  不然会报错
int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	// Entity e1 = { 5, 8 }; static int 不能这员工初始化  因为x y 不再是struct里面的成员了
	Entity e1;
	e1.x = 5;
	e1.y = 6;

	// 其实对于静态对象的使用我们直接 就行了  因为它们只会创建一次  所以这里可以世界对它使用  这就是它的全部了
	Entity::x = 9;
	Entity::y = 11;

	e.Print();
	e1.Print();
	Entity::Print();
	std::cin.get();
}