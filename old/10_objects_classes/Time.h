#pragma once

class Time
{
public:
    Time() {}
    Time(int h, int m) 
    {
        this->hour = h;
        this->minute = m;
    }
    ~Time() {}
    void set_h(int h)
    {
        this->hour = h;
    }
    void set_m(int m)
    {
        this->minute = m;
    }
    int get_h() const {return this->hour;}
    int get_m() const {return this->minute;}
    int reduce() const {return 60 * this->hour + this->minute;}
    Time operator-(const Time & T)
    {
        Time t = Time();
        int minute = this->get_m() - T.get_m();
        if (minute < 0)
        {
            t.set_h(get_h() - T.get_h() - 1);
            t.set_m(minute + 60);
        }
        else
        {
            t.set_h(get_h() - T.get_h());
            t.set_m(minute);
        }
        return t;
    }
    friend Time operator+(int minute, const Time &T)
    {
        Time t = Time();
        minute += T.get_m();
        if (minute >= 60)
        {
            t.set_m(minute - 60);
            t.set_h(T.get_h() + 1);
        }
        else
        {
            t.set_m(minute);
            t.set_h(T.get_h());
        }
        return t;
    }
private:
    int hour;
    int minute;
};

