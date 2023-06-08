#include <iostream>
#include "log.h"


int main()
{
	std::cout << "hello world" << std::endl;

	// loops 循环
	// for 循环
	for (int i = 0; i < 5; i++) 
	{
		Log("hello world");
	}

	int b = 0;
	for (; b < 5;) 
	{
		Log("hello world");
		b++;
	}
	std::cout << "==============================" << std::endl;
	// while 循环
	int a = 0;
	while (a < 5) 
	{
		Log("hello while");
		a++;
	}

	//	这里循环的选择有一个约定俗成的规定：
	//		如果你有有个已经存在的条件，你只是想进行一些比较，例如游戏循环，循环生成游戏帧
	//		有一个变量running 你可能想让这个游戏持续循环，running is ture 就持续运行
	//		类似的事情的时候就要用while循环，因为条件是不变的，不需要声明条件，也不用在每次循环后改变这个条件
	//		
	//	当我们处理数组的时候，比如一个确定长度的数组，一共有10个元素，那就可以用for循环
	//		当我们处理的是一些知道循环次数的，就使用for循环，因为只需要跟踪某些变量循环有限次数
	//	
	//

	// 还有一种不太常用的循环 do-while  这个已经不太有用了
	// 相较于 for 和 while 已经不太常见了
	// 这里唯一的不同就是do while 是要先执行内部的行为，然后再判断是否越界，所以它最少都会执行一次
	//

	int d = 5;
	do
	{
		Log("do while test");
		d++;
	} while (d < 5);
	
	//	c++ 中的控制流语句
	//	控制流语句与循环语句一起工作  break continue return 它们用来控制这些循环语句更好的运行
	//	这里都是和其他语言一样的功效
	//
	for (int i = 0; i < 5; i++)
	{
		Log("hello world");
		// continue break return  这里就不展示了  都知道效果
	}


	std::cin.get();
}