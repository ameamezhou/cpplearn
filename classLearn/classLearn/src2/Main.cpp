#include <iostream>

// 现在我们思考一下  要创建一个Log类是如何工作的
// 我们在创建一个类或者设计API的时候 一个很好的方法就是通过研究它的使用情况
//
class Log
{
public:
	// 这里写了多个public 是因为把不同的部分分开来写 能让你的结构看起来更舒服
	// 一个放方法  一个放变量
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	const int LogLevelDebug = 3;

public:
	void SetLevel(int level)
	{
		// 当我在函数内部写代码的时候  我们引用了成员变量，我们就知道什么是局部变量 那些是成员变量
		// 这里并不是必须的  但是保持这个比较好的习惯就能在应对复杂类 或者 大型库的时候是很有帮助的
		// 
		// 这里level 我们在输入的时候如果直接输入 0 1 2 3 可能我们在写的时候能知道代表着不同的等级  但是别人看就会很莫名其妙
		// 这些数字是什么  所以我们要创建一些参数 它们的值为 0 1 2 这些内容方便我们理解
		// 比如 设置 LogLevelWarning
		//
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
		{
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}

	void Debug(const char* message)
	{
		if (m_LogLevel >= LogLevelDebug)
			std::cout << "[DEBUG]: " << message << std::endl;
	}

private:
	// 这里用来保存我们的log级别的设定
	int m_LogLevel = LogLevelDebug;
	// 表示打印所有日志
};

int main()
{
	// 所以我们直接在main函数里开始输入我们会如何使用log类的情况
	//
	Log log;
	// 这个表示只有告警或者更重要的信息  比如告警或者错误  才会被打印出来 但是不会跟踪消息
	log.SetLevel(log.LogLevelWarning);
	log.Error("error");
	log.Warn("warning");
	log.Info("info");
	log.Debug("debug");
	// 这个时候我们知道我们想要的Log类看起来像什么了，我们就可以直接回去填空
	std::cin.get();
}