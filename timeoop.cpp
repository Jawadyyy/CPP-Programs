#include <iostream>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:

    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int hor, int min, int sec) : hours(hor), minutes(min), seconds(sec) {}

    void Display() const
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    void adjustTime()
    {
        if (seconds >= 60)
        {
            minutes += seconds / 60;
            seconds %= 60;
        }

        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes %= 60;
        }

        if (hours >= 24)
        {
            hours %= 24;
        }
    }

    Time addTime(const Time &t1, const Time &t2) const
    {
        Time result;
        result.seconds = t1.seconds + t2.seconds;
        result.minutes = t1.minutes + t2.minutes;
        result.hours = t1.hours + t2.hours;

        result.adjustTime();

        return result;
    }
};

int main()
{
    Time time1(10, 30, 45);
    Time time2(4, 45, 20);
    Time time3;

    Time result = time3.addTime(time1, time2);

    result.adjustTime();
    result.Display();

    return 0;
}
