#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <tuple>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <iomanip>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
using namespace std;
#include"RandomIntegerGenerator.h"
#include"BirthDayGenerator.h"

    string   Date::toString()
    {
        stringstream builder;
        builder << _day << "/" << _month << "/" << _year;
        string res = builder.str();
        return res;
    }


bool isLeapyear(int year) {
    if (year % 400 == 0 || year % 4 == 0 && year % 100 == 0) {
        return true;
    }
    return false;
}

    Date BirthDayGenerator::next(int age)
    {
        Date x;
        RandomIntegerGenerator rng;
        int y = x.year() - age;
        if (isLeapyear(y)) { maxDayinMonths[2] = 29; }
        int m = rng.next(1, 12);
        int d = rng.next(1, maxDayinMonths[m]);
        Date dob(d, m, y);
        return dob;
    }


    string DatetoStringUIConverter::convert(const Date& val)
    {
        stringstream out;
        out << val.day() << "/" << val.month() << "/" << val.year();
        string result = out.str();
        return result;
    }
