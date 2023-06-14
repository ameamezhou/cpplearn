#include <iostream>


static int b = 0;
// 就用函数举个 static 的例子吧
void Function() 
{
	static int i = 0;
	i++;
	b++;
	std::cout << i << std::endl;
	std::cout << b << std::endl;
}
// 函数在第一次调用的时候 这个变量将会初始化为 0  然后所有对函数的后续调用都不会再创建一个全新的变量
// 检验方法：每次调用给它加1
// 
// 这里我们对比一下 i 和 b 的区别  运行就知道  不运行也猜的到
// i只能在函数内部访问，b的作用域就是整个程序都能访问   所以我们中途可以修改b的值
// 如果我们希望这个值只在函数内部被调用   就可以用local static
// 

// 第二个例子是  单例类   单例类是只存在一个实例的类
class Singleton
{
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get() { return *s_Instance; }

	void Hello() {}
};

Singleton* Singleton::s_Instance = nullptr;


int main()
{	
	Function();
	b = 10;
	Function();
	Function();
	Function();
	Function();
	Function();


	Singleton::Get().Hello();

	std::cin.get();
}