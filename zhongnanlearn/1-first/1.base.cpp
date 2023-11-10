#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <bits/stdc++.h>

// using namespace std;

void func1(int a) {
	a++;
	std::cout << a << std::endl;
}

void func2(int &a){
	a++;
	std::cout << a << std::endl;
}

int main(){
	std::vector<int> b = std::vector<int>(3,1);
	std::vector<int> a = { 1,2,3 };
	a.push_back(4);  // 插入
	for (int i = 0; i < 3; ++i)
		std::cout << b[i] << std::endl;
	a.pop_back(); // 删除最后一个元素
	for (int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;

	// string 字符串
	std::string s = "fulenia";
	// s = std::string(6, 'a');
	s.push_back('b');
	std::cout << s << std::endl;
	s.pop_back(); // s 这里是和vector 是同一种实现方式   和上面是一样的
	for(int i = 0; i < s.size(); i++) std::cout << s[i] << std::endl;
	// 不能用printf直接输出，要用s.c_str()
	// s = s1 + s2; 两个字符串相加
	// "abc" + "efg" = "abcefg"

	// stack 栈
	// std::stack<int> st;
	// st.push(1);
	// st.pop();

	// 队列 queue
	// std::queue<int> q;
	// q.push(1);
	// q.pop();
	// q.front(); // 访问队头元素
	// q.back(); // 访问队尾元素

	// map 哈希表
	// std::map<int, char> m;
	// m[1] = 'a';
	// m[2] = 'b';
	// m.clear(); // 清空哈希表

	// 引用
	int x = 10;
	func1(x);
	std::cout << x << std::endl;
	func2(x);
	std::cout << x << std::endl;
	return 0;
}