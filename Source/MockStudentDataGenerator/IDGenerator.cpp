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
#include"IDGenerator.h"

    string IDGenerator::next() {
        int ID = rand() % (100, 800);
        return  Header + to_string(ID);
    }
