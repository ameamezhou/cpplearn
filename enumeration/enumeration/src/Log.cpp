#include <iostream>

class Log
{
public:
	// log ������������ȼ�ֵ�ͺ��ʺ���ö��  ��Ϊ����Ҫ��������ʾĳ��״̬
	enum Level
	{
		Error = 0, Warning, Info, Debug
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
		if (m_LogLevel >= Error)
		{
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= Warning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= Info)
			std::cout << "[INFO]: " << message << std::endl;
	}

	void Debug(const char* message)
	{
		if (m_LogLevel >= Debug)
			std::cout << "[DEBUG]: " << message << std::endl;
	}

private:
	int m_LogLevel = Info;
};