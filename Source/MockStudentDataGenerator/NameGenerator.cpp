
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
#include"NameGenerator.h"
Fullname RandomVietnamFullnameGenerator::next() {
    Fullname x;
    int max = 4;
    long long f = rand() % 5;
    long long m = rand() % 5;
    long long l = rand() % 5;
    x.setfName(First[f]);
    x.setmName(Mid[m]);
    x.setlName(Last[l]);
    return x;
}
string Fullname::toString() {
    stringstream out;
    out << _fName << " " << _mName << " " << _lName;
    return out.str();
}