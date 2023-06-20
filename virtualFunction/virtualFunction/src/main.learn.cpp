#include <iostream>
#include <string>


class Printable
{
public:
	virtual std::string GetClassName() = 0;
};
// 我们实现了 Printable 之后  需要让后面的类继承它 这样我们才能都拥有这个接口的功能  并在对应的函数中进行调用
// 
//

// 这里我们要让 Entity 继承 GetClassName 这个接口 也就是做一次类的继承
class Entity : public Printable
{
public:
	virtual std::string GetName() { return "entity"; }; // 这里在做Printable学习的时候先把它变为普通虚函数
	// 首先我们在 Entity中实现 GetClassName 这个纯虚函数
	// 如果在SubClass中同步实现好像会有点问题  但是先不管  这里能够做到实例化了
	std::string GetClassName() { return "Entity"; }
};

// 由于entity 已经继承了  所以 SubEntity 会自动继承
// 如果是其他的类想要继承多个class  就要
// class A : public B, C 逗号隔开
class SubEntity : public Entity
{
private:
	std::string m_Name;
public:
	SubEntity(const std::string& name)
		: m_Name(name) {}

	std::string GetName() { return m_Name; }
	std::string GetClassName() override { return "SubEntity"; }
	// 在我们改写同一个接口函数（纯虚函数）的时候 我们一定要记得加override 进行覆盖  不然会有link error
};

void PrintName(Entity* e)
{
	std::cout << e->GetName() << std::endl;
}


// 我们举个更好的例子：
// void PrintClassName(? ? ? obj)
void PrintClassName(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}
// 我们这里要接收一个 ??? 未定义类型的 obj对象，并输出它的类名，这里要保证我们这个类要有GetClassName这个函数
// 我们需要一个类型 可以提供GetClassName函数  这就是所谓的接口
// 在其他的语言中有interface类型  比如golang，但是在c++中没有interface的定义，interface就是c++中的一种class
// 这里我们把它叫做 Printable并在上面实现它
// 


int main()
{
	Entity* e = new Entity();
	// Entity* e = new Entity();  这里无法实例化  所以我们要实例化SubEntity
	// std::cout << e->GetName() << std::endl;
	Entity* s = new SubEntity("zhou god");
	//PrintName(e);
	// 这里能够使用是因为 SubEntity 已经实现了一个GetName的方法，如果没有实现，我们也无法进行实例化
	// 这里实际上你只有实现了所有这些虚函数之后，才能实例化，或者说再更上层次的类，就比如
	// Player -> SubEntity -> Entity 如果我们再SubEntity实现了GetName Player就能实例化了
	// 简而言之，纯虚函数必须被实现才能创建这个类以及它衍生的子类
	PrintClassName(e);
	PrintClassName(s);
	// 我们会得到两次Entity  因为 SubEntity 还没有定义 GetClassName
	std::cin.get();
}