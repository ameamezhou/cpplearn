// ����ʲô  ��ֻ�Ƕ����ݺ͹��������һ���һ�ַ���
#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// ��Ķ���
class Player
{
	public:
		int x, y;
		int speed;

		void Move(int xa, int ya) {
			x += xa * speed;
			y += ya * speed;
		}
	private:
		int px, py;
};

void Move(Player& player, int xa, int ya) {
	player.x += xa;
	player.y += ya;
}

int main() 
{
	// ���๹�ɵı�����Ϊ����  �µĶ��������Ϊʵ��
	Player player0;
	// player0.x = 10; ֱ�ӱ����������� player ���ܷ���Player��������˽�г�Ա
	// class Player
	// {
	// 		int x, y;
	// 		int speed;
	// };
	// ������Ϊ����ָ�����е����ݵĿɼ��� Ĭ�������  ������Ĭ�ϵ����ݶ���˽�еģ���ζ��ֻ�����еĺ������ܷ�����Щ����
	// Ȼ������ϣ��main�����з�����Щ����  ��Ҫ���ó� public �� private
	// private ֻ�ܱ��ຯ������  public���Ա��ⲿ����
	//
	player0.x = 10; 
	player0.y = 5;
	// ���������Ҫ�ı� player ����� x y ֵ  ���ǿ����Լ�дһ������
	// 
	Move(player0, 5, 7);

	// �����move д�������� ���ǳ�Ϊ�෽��
	player0.Move(1, -1);

	std::cin.get();
}