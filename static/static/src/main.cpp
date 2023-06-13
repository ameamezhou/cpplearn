// static 关键字在c++中有两个意思  取决于上下文
// 其中一个是在类或者结构体外部使用static关键字
// 另一个是在类或者结构体内部使用static
// 
// 类外面的static 意味着你声明为static的符号，链接将只是在内部，它意味着只能对你定义它的翻译单元可见
// 
// 类或者结构体内部是static 代表着静态变量，意味着变量实际上将与类的所有实例共享内存
// 这意味着该静态变量在你类中创建的所有实例中，静态变量只会创建一次
// 
// 类似的事情也适用于类中的静态方法 在类中没有实例会传递给该方法
// 
// 这里我们只关注在类和结构体外部的static
//


// 这里举个最简单的例子
/*
#include <iostream>

int s_variable = 10;

int main()
{
	std::cout << s_variable << std::endl;
	std::cin.get();
}

这个时候运行不会有任何问题

但是如果我讲 static.cpp 中 s_variable 的 static int s_variable = 5; static 删除
我们在链接截断会获得一个链接错误，因为 s_variable 已经在其他地方定义过了
我们不能有两个同名的全局变量  不然链接那块过不了

我们有这样一种解决方法  将 main.cpp 下面的
int s_variable = 10; => extern int s_variable;
这里的语法就意味着它会在外部翻译单元中寻找 s_variable 变量
但是如果 static.cpp 中的 s_variable 被标记为静态的话 也会报链接错误
*/