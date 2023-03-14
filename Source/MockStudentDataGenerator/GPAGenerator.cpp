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
#include"GPAGenerator.h"

    float GPAGenerator::next(float a, float b) {
        float random = ((float)rand()) / (float)RAND_MAX;
        float diff = b - a;
        float r = random * diff;
        cout << setprecision(2);
        cout << fixed;
        return a + r;
    }
