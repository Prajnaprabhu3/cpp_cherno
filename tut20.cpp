#include <iostream>
using namespace std;

class Log
{
public:
    const int LogLevelWarning = 1;
    const int LogLevelError = 0;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel;

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
            cout << "[Warning]" << message << endl;
    }

    void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelInfo)
            cout << "[Info]" << message << endl;
    }

    void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelError)
            cout << "[Error]" << message << endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    cin.get();

    log.Error("Hello");
}