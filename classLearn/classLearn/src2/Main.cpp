#include <iostream>

// ��������˼��һ��  Ҫ����һ��Log������ι�����
// �����ڴ���һ����������API��ʱ�� һ���ܺõķ�������ͨ���о�����ʹ�����
//
class Log
{
public:
	// ����д�˶��public ����Ϊ�Ѳ�ͬ�Ĳ��ַֿ���д ������Ľṹ�����������
	// һ���ŷ���  һ���ű���
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	const int LogLevelDebug = 3;

public:
	void SetLevel(int level)
	{
		// �����ں����ڲ�д�����ʱ��  ���������˳�Ա���������Ǿ�֪��ʲô�Ǿֲ����� ��Щ�ǳ�Ա����
		// ���ﲢ���Ǳ����  ���Ǳ�������ȽϺõ�ϰ�߾�����Ӧ�Ը����� ���� ���Ϳ��ʱ���Ǻ��а�����
		// 
		// ����level �����������ʱ�����ֱ������ 0 1 2 3 ����������д��ʱ����֪�������Ų�ͬ�ĵȼ�  ���Ǳ��˿��ͻ��Ī������
		// ��Щ������ʲô  ��������Ҫ����һЩ���� ���ǵ�ֵΪ 0 1 2 ��Щ���ݷ����������
		// ���� ���� LogLevelWarning
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
	// ���������������ǵ�log������趨
	int m_LogLevel = LogLevelDebug;
	// ��ʾ��ӡ������־
};

int main()
{
	// ��������ֱ����main�����￪ʼ�������ǻ����ʹ��log������
	//
	Log log;
	// �����ʾֻ�и澯���߸���Ҫ����Ϣ  ����澯���ߴ���  �Żᱻ��ӡ���� ���ǲ��������Ϣ
	log.SetLevel(log.LogLevelWarning);
	log.Error("error");
	log.Warn("warning");
	log.Info("info");
	log.Debug("debug");
	// ���ʱ������֪��������Ҫ��Log�࿴������ʲô�ˣ����ǾͿ���ֱ�ӻ�ȥ���
	std::cin.get();
}