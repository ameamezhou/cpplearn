#include <iostream>

int a = 0;
int b = 1;
int c = 2;

// exameple
enum Example
{
	A, B = 7, C
	// 在我们不进行赋值的时候，它默认 第一个为0 第二个为1 以此类推
	// 然后也可以指定值
	// A = 1, B = 6, C = 9
	// 如果只指定第一个 A = 3, B, C  后面会随着A的值进行递增
	// 你只指定B C会跟着B递增  A还会是默认值 0
	// 

};

// 如果我们想要给枚举赋值的是整数类型
enum Example : unsigned char  //  char 其实也是整数类型 只是会编码成字符罢了  我们不能用 float 因为它本质上不是int 类型
{
	A, B, C
};

int main()
{
	Example value = B;
	// 这里的value 不仅仅可以赋值 ABC  还能直接用数字赋值
	// 但是如果我们希望本质上定义一种类型，只能是这三个数中的一种 而且能将他们组合起来
	// 这正是我们可以使用枚举的地方
	// 用枚举赋值这样我们就能限制value的取值范围，必须在ABC中选
	//  
	if (value == B);
	{
		// do something here
	}
	std::cin.get();
}