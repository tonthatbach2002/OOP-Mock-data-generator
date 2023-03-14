#pragma once
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
#include"RandomTelephoneGenerator.h"

string RandomTelephoneGenerator::next() {
    string x;
    RandomIntegerGenerator rng;
    long long Header = rand() % 7;
    long long fournext = rng.next(123, 999);
    long long fourlast = rng.next(234, 999);
    x = PhoneHeader[Header] + "-" + to_string(fournext) + "-" + to_string(fourlast);
    return x;
}
