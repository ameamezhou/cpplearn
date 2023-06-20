#include <iostream>
#include <string>


class Printable
{
public:
	virtual std::string GetClassName() = 0;
};
// ����ʵ���� Printable ֮��  ��Ҫ�ú������̳��� �������ǲ��ܶ�ӵ������ӿڵĹ���  ���ڶ�Ӧ�ĺ����н��е���
// 
//

// ��������Ҫ�� Entity �̳� GetClassName ����ӿ� Ҳ������һ����ļ̳�
class Entity : public Printable
{
public:
	virtual std::string GetName() { return "entity"; }; // ��������Printableѧϰ��ʱ���Ȱ�����Ϊ��ͨ�麯��
	// ���������� Entity��ʵ�� GetClassName ������麯��
	// �����SubClass��ͬ��ʵ�ֺ�����е�����  �����Ȳ���  �����ܹ�����ʵ������
	std::string GetClassName() { return "Entity"; }
};

// ����entity �Ѿ��̳���  ���� SubEntity ���Զ��̳�
// ���������������Ҫ�̳ж��class  ��Ҫ
// class A : public B, C ���Ÿ���
class SubEntity : public Entity
{
private:
	std::string m_Name;
public:
	SubEntity(const std::string& name)
		: m_Name(name) {}

	std::string GetName() { return m_Name; }
	std::string GetClassName() override { return "SubEntity"; }
	// �����Ǹ�дͬһ���ӿں��������麯������ʱ�� ����һ��Ҫ�ǵü�override ���и���  ��Ȼ����link error
};

void PrintName(Entity* e)
{
	std::cout << e->GetName() << std::endl;
}


// ���Ǿٸ����õ����ӣ�
// void PrintClassName(? ? ? obj)
void PrintClassName(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}
// ��������Ҫ����һ�� ??? δ�������͵� obj���󣬲������������������Ҫ��֤���������Ҫ��GetClassName�������
// ������Ҫһ������ �����ṩGetClassName����  �������ν�Ľӿ�
// ����������������interface����  ����golang��������c++��û��interface�Ķ��壬interface����c++�е�һ��class
// �������ǰ������� Printable��������ʵ����
// 


int main()
{
	Entity* e = new Entity();
	// Entity* e = new Entity();  �����޷�ʵ����  ��������Ҫʵ����SubEntity
	// std::cout << e->GetName() << std::endl;
	Entity* s = new SubEntity("zhou god");
	//PrintName(e);
	// �����ܹ�ʹ������Ϊ SubEntity �Ѿ�ʵ����һ��GetName�ķ��������û��ʵ�֣�����Ҳ�޷�����ʵ����
	// ����ʵ������ֻ��ʵ����������Щ�麯��֮�󣬲���ʵ����������˵�ٸ��ϲ�ε��࣬�ͱ���
	// Player -> SubEntity -> Entity ���������SubEntityʵ����GetName Player����ʵ������
	// �����֮�����麯�����뱻ʵ�ֲ��ܴ���������Լ�������������
	PrintClassName(e);
	PrintClassName(s);
	// ���ǻ�õ�����Entity  ��Ϊ SubEntity ��û�ж��� GetClassName
	std::cin.get();
}