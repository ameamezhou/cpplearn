// 类是什么  类只是对数据和功能组合在一起的一种方法
#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// 类的定义
class Player
{
	public:
		int x, y;
		int speed;

		void Move(int xa, int ya) {
			x += xa * speed;
			y += ya * speed;
		}
	private:
		int px, py;
};

void Move(Player& player, int xa, int ya) {
	player.x += xa;
	player.y += ya;
}

int main() 
{
	// 由类构成的变量称为对象  新的对象变量称为实例
	Player player0;
	// player0.x = 10; 直接编译会告诉我们 player 不能访问Player中声明的私有成员
	// class Player
	// {
	// 		int x, y;
	// 		int speed;
	// };
	// 这是因为可以指定类中的内容的可见性 默认情况下  类里面默认的内容都是私有的，意味着只有类中的函数才能访问这些变量
	// 然而我们希望main函数中访问这些变量  就要设置成 public 和 private
	// private 只能被类函数访问  public可以被外部访问
	//
	player0.x = 10; 
	player0.y = 5;
	// 如果我们想要改变 player 里面的 x y 值  我们可以自己写一个函数
	// 
	Move(player0, 5, 7);

	// 如果讲move 写到类里面 我们成为类方法
	player0.Move(1, -1);

	// 类和结构体 structure 的对比
	// 两者基本上没有什么区别，只有关于可见度的一个小区别  
	// 类的成员默认为private  所以我们要声明public
	// 而结构体 struct 默认是public  使用上就这一个区别
	// struct 还在 C++ 中使用的原因是因为它希望与C保持向后兼容性  因为c没有类  但是有结构体 如果直接去掉结构体关键字就会失去兼容性
	// 当用到 Plain old data POD 的时候  就会尽可能地使用struct
	// 举个很简单的例子  向量类 xiangliagnlei.cpp
	//

	std::cin.get();
}