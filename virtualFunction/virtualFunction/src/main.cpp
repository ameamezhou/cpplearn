#include <iostream>
#include <string>

class Entity
{
public:
	std::string GetName() { return "Entity"; }
	virtual std::string GetName2() { return "Entity"; }
	virtual std::string GetName3() = 0;
	// 令一个虚函数等于零本质上就算让它成为一个纯虚函数 意味着它必须在一个子类中实现(如果你想实例化这个子类的话)
	// 
};

class SubEntity : public Entity
{
private:
	std::string m_Name;
public:
	SubEntity(const std::string& name)
		: m_Name(name) {}

	std::string GetName() { return m_Name; }

	std::string GetName2() override { return m_Name; } // c++ 11 引入的override 关键字  这里不加也行  不过最好加一下
};	// 如果 override 对应的不是一个 virtual function 会报错

void PrintName(Entity* e)
{
	std::cout << e->GetName() << std::endl;
}

void PrintName2(Entity* e)
{
	std::cout << e->GetName2() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	// 如果Entity有纯虚函数的话  我们就不再具有实例化Entity的能力  我们必须给它一个子类 来实现这个函数
	// 这里后续看main.learn.cpp
	std::cout << e->GetName() << std::endl;

	SubEntity* s = new SubEntity("zhouzhou");
	std::cout << s->GetName() << std::endl;

	// 这里如果我们写一个 PrintName函数
	/*
	void PrintName(Entity* e)
	{
		std::cout << e->GetName() << std::endl;
	}
	这里输出的都会是Entity  因为这里其实c++很笨  它不会变通  这里被限制了Entity 所以它就会调用Entity的方法
	这就是虚函数发挥能力的地方
	虚函数引入了一种叫做 Dynamic Dispatch 动态联编 的东西
	它通常通过v表(虚函数表)来实现编译
	v表就是一个表  它包含基类中所有虚函数的映射  我们运行时将它们映射到正确的 覆写override 函数就行了

	*/
	PrintName(e);
	PrintName(s);

	PrintName2(e);
	PrintName2(s);
	std::cin.get();
}
