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
#include"NameGenerator.h"
#include"EmailGenerator.h"


string EmailGenerator::next(Fullname x)
{
    long long d = rand() % 5;
    string s_emailaddr = x.toString();
    int space = s_emailaddr.find(" ");
    string firstNamechar = s_emailaddr.substr(0, 1);  //email

    s_emailaddr = s_emailaddr.substr(space + 1, s_emailaddr.size() - space - 1);
    string midNamechar = s_emailaddr.substr(0, 1);
    space = s_emailaddr.find(" ");

    string LastName = s_emailaddr.substr(space + 1, s_emailaddr.size() - space - 1);
    string Emailaddr = firstNamechar + midNamechar + LastName;
    transform(Emailaddr.begin(), Emailaddr.end(), Emailaddr.begin(), ::tolower);
    string a = domains[d];
    Emailaddr += a;
    return Emailaddr;
}
