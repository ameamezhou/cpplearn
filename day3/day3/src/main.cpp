#include <iostream>
#include "log.h"


int main()
{
	std::cout << "hello world" << std::endl;

	// loops ѭ��
	// for ѭ��
	for (int i = 0; i < 5; i++) 
	{
		Log("hello world");
	}

	int b = 0;
	for (; b < 5;) 
	{
		Log("hello world");
		b++;
	}
	std::cout << "==============================" << std::endl;
	// while ѭ��
	int a = 0;
	while (a < 5) 
	{
		Log("hello while");
		a++;
	}

	//	����ѭ����ѡ����һ��Լ���׳ɵĹ涨��
	//		��������и��Ѿ����ڵ���������ֻ�������һЩ�Ƚϣ�������Ϸѭ����ѭ��������Ϸ֡
	//		��һ������running ��������������Ϸ����ѭ����running is ture �ͳ�������
	//		���Ƶ������ʱ���Ҫ��whileѭ������Ϊ�����ǲ���ģ�����Ҫ����������Ҳ������ÿ��ѭ����ı��������
	//		
	//	�����Ǵ��������ʱ�򣬱���һ��ȷ�����ȵ����飬һ����10��Ԫ�أ��ǾͿ�����forѭ��
	//		�����Ǵ�������һЩ֪��ѭ�������ģ���ʹ��forѭ������Ϊֻ��Ҫ����ĳЩ����ѭ�����޴���
	//	
	//

	// ����һ�ֲ�̫���õ�ѭ�� do-while  ����Ѿ���̫������
	// ����� for �� while �Ѿ���̫������
	// ����Ψһ�Ĳ�ͬ����do while ��Ҫ��ִ���ڲ�����Ϊ��Ȼ�����ж��Ƿ�Խ�磬���������ٶ���ִ��һ��
	//

	int d = 5;
	do
	{
		Log("do while test");
		d++;
	} while (d < 5);
	
	//	c++ �еĿ��������
	//	�����������ѭ�����һ����  break continue return ��������������Щѭ�������õ�����
	//	���ﶼ�Ǻ���������һ���Ĺ�Ч
	//
	for (int i = 0; i < 5; i++)
	{
		Log("hello world");
		// continue break return  ����Ͳ�չʾ��  ��֪��Ч��
	}


	std::cin.get();
}