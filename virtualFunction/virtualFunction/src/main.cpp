#include <iostream>
#include <string>

class Entity
{
public:
	std::string GetName() { return "Entity"; }
	virtual std::string GetName2() { return "Entity"; }
	virtual std::string GetName3() = 0;
	// ��һ���麯�������㱾���Ͼ���������Ϊһ�����麯�� ��ζ����������һ��������ʵ��(�������ʵ�����������Ļ�)
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

	std::string GetName2() override { return m_Name; } // c++ 11 �����override �ؼ���  ���ﲻ��Ҳ��  ������ü�һ��
};	// ��� override ��Ӧ�Ĳ���һ�� virtual function �ᱨ��

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
	// ���Entity�д��麯���Ļ�  ���ǾͲ��پ���ʵ����Entity������  ���Ǳ������һ������ ��ʵ���������
	// ���������main.learn.cpp
	std::cout << e->GetName() << std::endl;

	SubEntity* s = new SubEntity("zhouzhou");
	std::cout << s->GetName() << std::endl;

	// �����������дһ�� PrintName����
	/*
	void PrintName(Entity* e)
	{
		std::cout << e->GetName() << std::endl;
	}
	��������Ķ�����Entity  ��Ϊ������ʵc++�ܱ�  �������ͨ  ���ﱻ������Entity �������ͻ����Entity�ķ���
	������麯�����������ĵط�
	�麯��������һ�ֽ��� Dynamic Dispatch ��̬���� �Ķ���
	��ͨ��ͨ��v��(�麯����)��ʵ�ֱ���
	v�����һ����  �����������������麯����ӳ��  ��������ʱ������ӳ�䵽��ȷ�� ��дoverride ����������

	*/
	PrintName(e);
	PrintName(s);

	PrintName2(e);
	PrintName2(s);
	std::cin.get();
}
