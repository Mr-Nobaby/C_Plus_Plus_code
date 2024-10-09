#include <iostream>

#define Log(x) std::cout<< x << std::endl


class Log
{
public:
	enum level
	{
		LevelError,LevelWarning,LevelInfo
	};
	//const int LogLevelError = 0;
	//const int LogLevelWarning = 1;
	//const int LogLevelInfo = 2;

private:
	level m_LogLevel = LevelInfo;

public:
	void SetLevel(level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* str)
	{
		if(m_LogLevel >= LevelError)
			std::cout << "[ERROR]:" << str << std::endl;
	}

	void Warn(const char* str)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]:" << str << std::endl;
	}

	void Info(const char* str)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]:" << str << std::endl;
	}
};

int main()
{

	Log log;
	log.SetLevel(Log::LevelError);
	log.Warn("Hello");
	log.Error("Hello");
	log.Info("Hello");

	std::cin.get();
}
