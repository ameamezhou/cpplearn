#include <iostream>

class Log
{
public:
	// log ������������ȼ�ֵ�ͺ��ʺ���ö��  ��Ϊ����Ҫ��������ʾĳ��״̬
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
	// ����ĳ�ö��֮��  ���Ǿ�Ҫ�������������  ���������ǵ�ö���� Level  ������ʵ���Ϊ ö�پ���һ�ּ���
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
	// ����ö��������ͻ��ʱ��ͻᱨ��  ��������һ��Ҫע��
	// loga.Debug("test");
	log.SetLevel(Log::LevelInfo);
	log.Debug("debug");
	// ����ʾ��

}