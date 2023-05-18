#pragma once
class Time{
public:
void set_time(int , int , int);
unsigned int getHour() const ;
unsigned int& badSetHour(int);

private:
    unsigned int hour {0};
    unsigned int minute{0};
    unsigned int second{0};


};