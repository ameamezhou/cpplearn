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

class A : public Students {  //��"class A: public Student"����ʾ˽�м̳�
	public:
		int GetAge() { return Age; }  //��������Է��ʻ����public��Ա
};

int main()
{
	struct Student stu = { 18,"����" };  //struct����д
	printf("%s%d����\n", stu.Name, stu.Age);


	class Students stu;
	stu.Age = 18;
	stu.Name = "����";
	std::cout << stu.Name << stu.Age << "����" << std::endl;
	
	class A a;
	std::cout << a.Age << std::endl;  //����ֱ�ӷ��ʻ����public��Ա
	//	cout << a.Age << endl;  //�޷�ͨ����������ʻ����public��Ա���ѱ��̳�Ϊprivate���ԣ�
	std::cout << a.GetAge();  //ֻ��ͨ������������Ĺ��г�Ա��ӷ��ʻ���


	return 0;
}
