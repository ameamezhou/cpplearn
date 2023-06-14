#include <iostream>

class Log
{
public:
	// log 类这里的三个等级值就很适合用枚举  因为我们要用整数表示某个状态
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo, LevelDebug
	};
	/*
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	const int LogLevelDebug = 3;
	*/

public:
	// 这里改成枚举之后  我们就要限制输入的内容  必须是我们的枚举类 Level  这里其实理解为 枚举就是一种集合
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
		{
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}

	void Debug(const char* message)
	{
		if (m_LogLevel >= LevelDebug)
			std::cout << "[DEBUG]: " << message << std::endl;
	}

private:
	Level m_LogLevel = LevelInfo;
};

int main()
{
	Log log;
	// loga.SetLevel(Log::Info);
	// 这里枚举命名冲突的时候就会报错  所以我们一定要注意
	// loga.Debug("test");
	log.SetLevel(Log::LevelInfo);
	log.Debug("debug");
	// 不演示了

}