#include <iostream>
#include <vector>

int main(){
	std::vector<int> b = std::vector<int>(3,1);
	std::vector<int> a = { 1,2,3 };
	a.push_back(4);  // 插入
	for (int i = 0; i < 3; ++i)
		std::cout << b[i] << std::endl;
	a.pop_back(); // 删除最后一个元素
	for (int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	return 0;
}