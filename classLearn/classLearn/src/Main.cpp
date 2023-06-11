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

	std::cin.get();
}