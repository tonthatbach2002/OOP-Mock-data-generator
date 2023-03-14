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
#include"AddressGenerator.h"


    string AddressGenerator::next() {
        long long n = rand() % 20;
        long long s = rand() % 12;
        long long w = rand() % 20;
        long long d = rand() % 20;
        long long c = rand() % 5;
        string Address;
        int x = AddrWard[w].find(' ');
        int y = AddrDistrict[d].find(' ');
        if (x != -1 && y != -1) {
            Address = AddrNum[n] + " " + AddrStreet[s] + ", " + AddrWard[w] + " Ward, " + AddrDistrict[d] + " DisTrict, " + AddrCity[c] + " City";
        }
        if (x == -1 && y != -1)
        {
            Address = AddrNum[n] + " " + AddrStreet[s] + ", " + "Ward " + AddrWard[w] + ", " + AddrDistrict[d] + " DisTrict, " + AddrCity[c] + " City";
        }
        if (x != -1 && y == -1) {
            Address = AddrNum[n] + " " + AddrStreet[s] + ", " + AddrWard[w] + " Ward, " + "DisTrict " + AddrDistrict[d] + ", " + AddrCity[c] + " City";
        }
        if (x == -1 && y == -1)
        {
            Address = AddrNum[n] + " " + AddrStreet[s] + ", " + "Ward " + AddrWard[w] + ", " + "DisTrict " + AddrDistrict[d] + ", " + AddrCity[c] + " City";
        }
        return Address;
    }