#include <iostream>


static int b = 0;
// ���ú����ٸ� static �����Ӱ�
void Function() 
{
	static int i = 0;
	i++;
	b++;
	std::cout << i << std::endl;
	std::cout << b << std::endl;
}
// �����ڵ�һ�ε��õ�ʱ�� ������������ʼ��Ϊ 0  Ȼ�����жԺ����ĺ������ö������ٴ���һ��ȫ�µı���
// ���鷽����ÿ�ε��ø�����1
// 
// �������ǶԱ�һ�� i �� b ������  ���о�֪��  ������Ҳ�µĵ�
// iֻ���ں����ڲ����ʣ�b��������������������ܷ���   ����������;�����޸�b��ֵ
// �������ϣ�����ֵֻ�ں����ڲ�������   �Ϳ�����local static
// 

// �ڶ���������  ������   ��������ֻ����һ��ʵ������
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