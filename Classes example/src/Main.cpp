#include <iostream>

#define Log(x) std::cout<< x << std::endl


class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	int m_LogLevel = LogLevelInfo;

public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Error(const char* str)
	{
		if(m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]:" << str << std::endl;
	}

	void Warn(const char* str)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]:" << str << std::endl;
	}

	void Info(const char* str)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]:" << str << std::endl;
	}
};

int main()
{

	Log log;
	//log.SetLevel(log.LogLevelError);
	log.Warn("Hello");
	log.Error("Hello");
	log.Info("Hello");

	std::cin.get();
}
