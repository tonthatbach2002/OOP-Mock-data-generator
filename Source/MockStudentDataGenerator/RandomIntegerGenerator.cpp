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
int RandomIntegerGenerator::next() {
    int res = rand();
    return res;
}
int RandomIntegerGenerator::next(int ceiling)
{
    int res = rand() % ceiling;
    return res;
}
int RandomIntegerGenerator::next(int left, int right) {
    int res = rand() % (right - left + 1) + left;
    return res;
}