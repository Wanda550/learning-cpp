#include <iostream>
#include <ctime> // for C++
                 // #include <time.h> for C
#include <synchapi.h>
#include <windows.h> // usleep for windows
// #include <unistd.h> // usleep for unix

// ctime library - date and time 
// the unix epoch (or unix time or POSIX time or unix timestamp)
// number of seconds that have elapsed since january 1, 1970 (midnight UTC/GMT)
// year 2038 problem - 32 bit integer will overflow
int main() {

    time_t now = time(nullptr);

    std::cout << now << std::endl;
    std::cout << ctime(&now) << std::endl;

    // date
    struct tm *localTime = localtime(&now);
    int year = localTime->tm_year + 1900;
    int month = localTime->tm_mon + 1;
    int day = localTime->tm_mday;
    int weekDay = localTime->tm_wday + 1;

    std::cout << year << std::endl;
    std::cout << month << std::endl;
    std::cout << day << std::endl;
    std::cout << weekDay << std::endl;

    std::cout << year << "/" << month << "/"<< day << std::endl;

    int hour = localTime->tm_hour;
    std::cout << hour << std::endl;

    int minute = localTime->tm_min;
    std::cout << minute << std::endl;

    int seconds = localTime->tm_sec;
    std::cout << seconds << std::endl;

    std::cout << hour << "/" << minute << "/"<< seconds << std::endl;

    // timing
    time_t start = time(nullptr);
    std::cout << ctime(&start) << std::endl;
    Sleep(2000);
    time_t end = time(nullptr);
    std::cout << ctime(&end) << std::endl;

    std::cout << (end - start) << std::endl;
    std::cout << difftime(end, start) << std::endl;
    
    return 0;
}