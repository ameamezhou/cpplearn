// ������ָ�����չ
// �Ӹ�������˵  ����ֻ��ָ���αװ ����ֻ��ָ���ϵ��﷨��  �����������Ķ� ����������
// ����ָ��  ����Դ���һ���µ�ָ�������Ȼ�����������ڿ�ָ��������ƵĶ���
// ���ò��У���Ϊ���ñ��롰���á��Ѿ����ڵı��������ñ�������һ���µı�����������ռ���ڴ�  ����û�������Ĵ洢�ռ�
// ���ǲ�����͵ı�������Ϊ��������Ϊһ������������
// reference must quote
//

#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int value)
{
	value++;
}

void Increment1(int* value)
{
	(*value)++;
	// ���� *value ���� * �Ļ�����һ���ڴ��ַ  ֻ���ڲ����ڴ��ַ������ֵ  ��û�дﵽ�޸�����Ŀ��ֵ��Ŀ��
	//  Ȼ������Ҫ���ǵ�������Ⱥ�˳��  *value++ ������++ �ٽ����������ã�������������Ӹ�����
	//
}

void Increment2(int& value)
{
	value++;
}

int main() 
{
	int a = 5;
	int* b = &a;
	// �����ָ��ָ�� &a(a���ڴ��ַ)��ʹ�ò�ͬ  ��Ϊ&����ʵ���������͵�һ����
	// ����Ҫע������  ֱ�ӵ���һ�����б���������
	// �����һ�����ã�����refʵ����������������������е�ʱ�����  ֻ����������ǵ�Դ������
	// �������ڱ���  ��Ұ���صõ��������� a �� ref  ��ֻ��õ�a
	int& ref = a;
	// �����������ľ���  ����ʹ�� ref ����ʹ��a һ����������������� ref = 2 Ȼ���ӡ a �ᷢ�����Ǹ��ĵ���ʵ���� a ��ֵ
	ref = 2;
	LOG(a);
	// ����������ǵ����þͲ���һ��������ָ��Ķ���  ������������Ҫʵ�ʴ���һ���µı���  �����൱�ڸ�a���˸����� ref
	// �������Ĵ�����൱���������� a = 2
	// �����ڹ����е�Ӧ�þ��Ƿ������ǵĹ�������Ȼ˵��Ҳ��֪������ʲô������

	// ��  �����Ҹ��������������
	// ����������дһ������ void Increment ���ͱ�������  �����������д������
	// ���Կ������ǲ�û�а�����Ϊһ��ָ��������û������ƵĶ������ݣ�����copyһ��ֵΪ5�ı�����value�У����ƻᴴ��һ��ȫ�µı���value
	// ����
	// void Increment(int value)
	// {
	//    int value = 5;
	// 	  value++;
	// }
	//
	Increment(a);
	LOG(a);

	// ��������������Ҫ���ľ���ͨ�����������ݱ��� �������Ż����  ��Ϊ��������Ӱ��ı�����a
	// ������˵��ָ��  ָ��ָ�ľ������ǵ��ڴ��ַ��  ��Ȼ����ͨ��ָ�������
	// ��Ϊ����˵������ֻ�ǿ�����5���ֵ��ȥ��������ֱ�Ӳ�����a�������������ǿ���ֱ�Ӱ�a�������ڴ��ַ����ȥ
	// ���ǾͿ���ͨ���ҵ��ڴ��ַ���޸Ķ�Ӧ��ֵ�ﵽĿ��
	// 
	//
	Increment1(&a);
	LOG(a);

	// ����������õ��÷�  �����ڱ����ʱ��Ͳ��ǿ���ֵ�� ����ֱ�������� a ������������ ���Կ��Գɹ��޸�a��ֵ
	// �����ָ����˵  ���û�����Ĵ�������  ��������ָ�� �����Ƚ϶�
	Increment2(ref);
	LOG(a);

	// ���û�����Ҫ��һ��  һ����������һ������   �㲻�ܸı������õĶ���
	// ����������������  c �� d
	int c = 8;
	int d = 5;

	int& ref1 = c;
	ref1 = d;  // �ǲ�����������  ��Ϊ�������൱�ڲ����޸����ö���  ���ǽ� c��ֵ��Ϊd��ֵ  ���� c = 5 d = 5
	// = �Ǹ�ֵ�ķ���
	// ��������һ�����õ�ʱ����������ϸ�����ֵ����Ϊ����������һЩ����  ��Ϊ������һ�������ı���

	std::cin.get();
}