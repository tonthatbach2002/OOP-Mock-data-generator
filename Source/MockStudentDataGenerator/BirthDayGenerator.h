#pragma once
class Date {
private:
    int _day;
    int _month;
    int _year;
public:
    int day() const { return _day; }
    int month() const { return _month; }
    int year() const { return _year; }
public:
    Date() {
        time_t info = time(NULL);
        tm* now = localtime(&info);
        _day = now->tm_mday;
        _month = now->tm_mon + 1;
        _year = now->tm_year + 1900;
    }
    Date(int day, int month, int year)
    {
        _day = day;
        _month = month;
        _year = year;
    }
    string  toString();
   

};
bool isLeapyear(int);
 
class BirthDayGenerator {
private:
    int maxDayinMonths[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
public:
    Date next(int );
    
       
    
};
class DatetoStringUIConverter {
    string convert(const Date&);
    
     
    
};