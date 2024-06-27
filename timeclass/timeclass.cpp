// timeclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;
class Time {
    int hour;
    int min;
    int sec;
public:
    Time() {
        hour = 0; 
        min = 0;
        sec = 0;
    }
    Time(int h, int m, int s) {
        hour = h;
        min = m;
        sec = s;
    }
//getter
    int get_hour() {
        return hour;
    }
    int get_min() {
        return min;
    }
    int get_sec() {
        return sec;
    }
 //setter
    void set_hour(int h) {
        hour = h;
    }
    void set_min(int h) {
        min = h;
    }
    void set_sec(int h) {
        sec = h;
    }
    //Overload
    void operator++() {

        sec = sec + 1;
        if (sec == 60) {
            min = min + 1;
            sec = 0;


        }
        if (min == 60) {
            hour = hour + 1;
            min = 0;
        }
        if (hour == 24) {
            hour = 0;
        }

    }

    //Overload
    void operator--() {

       // sec = sec - 1;
        if (sec == 0) {
            sec = 59;
            if (min == 0) {
                 
                min = 59;

                if (hour == 0) {
                    hour = 23;
                }
                else {
                    hour = hour - 1;
                }
            }
            else {
                min = min - 1;

            }
 


        }
        else {
            sec = sec - 1;

        }

    }
    friend ostream& operator<<(ostream& out, const Time& t);


};
ostream& operator<<(ostream& out,  Time& t) {
    out << t.get_hour() << ":" << t.get_min() << ":" << t.get_sec() << endl;
    return out;
}


int main()
{
    Time t(0, 0, 0);
    --t;
    cout << t;
    ++t;
    cout << t;
}

