#include <iostream>

struct Student {
	int Age;
	char Name[16];
};

class Students {
	public:
		int Age;
		std::string Name;
};

class A : public Students {  //非"class A: public Student"即表示私有继承
	public:
		int GetAge() { return Age; }  //派生类可以访问基类的public成员
};

int main()
{
	struct Student stu = { 18,"张三" };  //struct必须写
	printf("%s%d岁了\n", stu.Name, stu.Age);


	class Students stu;
	stu.Age = 18;
	stu.Name = "张三";
	std::cout << stu.Name << stu.Age << "岁了" << std::endl;
	
	class A a;
	std::cout << a.Age << std::endl;  //可以直接访问基类的public成员
	//	cout << a.Age << endl;  //无法通过派生类访问基类的public成员（已被继承为private属性）
	std::cout << a.GetAge();  //只能通过访问派生类的公有成员间接访问基类


	return 0;
}
