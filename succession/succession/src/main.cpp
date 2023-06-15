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
想要达到这个目标  如果复制entity的话就会有很多代码复制粘贴 重复了  所以这里我们用继承
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

// 这里我们要知道 Player 这个类它不仅仅就只是Player 它也是 Entity  所以我们可以在任何
// 需要使用Entity的地方使用Player  这是因为 Player 拥有 Entity 所拥有的一切，再多加一点点东西
// Player 说到底就是一个 Entity的超集
// 意味着如果我想拆功能键一个打印Entity对象的独立功能 比如通过访问 XYZ 并将它们输出打印到控制台
// 我可以传入Player对象到Entity对象为参数的函数中
// 因为Player 类或者说 Player 类型 保证会有XYZ  因为它继承自 Entity
//

int main() 
{
	std::cout << sizeof(Entity) << std::endl;
	// 这里的输出长度为12
	// 因为浮点数占4个字节  我们一共有3个浮点数  所以它的大小为8

	std::cout << sizeof(Player) << std::endl;
	// Player 如果是独立类  它就只有 const char* 类型的内存大小  也就是8个字节 因为我是x64的系统 x32 是4字节
	// 但是我们知道继承自 entity  所以它有16字节
	//

	Player player;
	player.X = 2;
	player.Y = 3;
	player.Z = 4;
	player.Move(5, 5, 5);
	player.PrintName();
	std::cin.get();
}