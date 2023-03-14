

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
#include"Student.h"
string Student::toString(Student x) {
    stringstream out;
    out << setprecision(2);
    out << fixed;
    out << "Student: " << x._ID << " - " << x._Name.toString() << endl
        << "    " << "GPA=" << x._GPA << ", Telephone=" << x._Tel << endl
        << "    " << "Email=" << x._Email << endl
        << "    " << "DOB=" << x._DOB << endl
        << "    " << "Address=" << x._Address;
    string res = out.str();
    return res;
}
vector<Student> StudentDatabase::all() {
    vector<Student>res;
    ifstream reader; //doc file
    reader.open(_filename);
    while (!reader.eof())
    {
        string s_idName;
        getline(reader, s_idName);
        int colon = s_idName.find(':');
        int comma = s_idName.find(',');
        int dash = s_idName.find('-');
        int  ID = stoi(s_idName.substr(colon + 2, dash - colon - 2));
        string s_Name = s_idName.substr(dash + 2, s_idName.size() - dash - 2);
        Fullname Name;
        int space = s_Name.find(' ');
        string firstname = s_Name.substr(0, space);
        Name.setfName(firstname);
        s_Name = s_Name.substr(space + 1, s_Name.size() - space - 1);
        space = s_Name.find(' ');
        string midname = s_Name.substr(0, space);
        Name.setmName(midname);
        s_Name = s_Name.substr(space + 1, s_Name.size() - space - 1);
        space = s_Name.find(' ');
        string lastname = s_Name.substr(0, space);
        Name.setlName(lastname);

        string s_GPATel;
        getline(reader, s_GPATel);
        comma = s_GPATel.find(',');
        int equal = s_GPATel.find('=');
        float GPA = stof(s_GPATel.substr(equal + 1, comma - equal - 1));
        s_GPATel = s_GPATel.substr(comma + 2, s_GPATel.size() - comma - 2);
        equal = s_GPATel.find('=');
        string Tel = s_GPATel.substr(equal + 1, s_GPATel.size() - equal - 1);



        string s_email;
        getline(reader, s_email);
        equal = s_email.find('=');
        string Email = s_email.substr(equal + 1, s_email.size() - equal - 1);

        string s_DOB;
        getline(reader, s_DOB);
        equal = s_DOB.find('=');
        string DOB = s_DOB.substr(equal + 1, s_DOB.size() - equal - 1);

        string s_Addr;
        getline(reader, s_Addr);
        equal = s_Addr.find('=');
        string Address = s_Addr.substr(equal + 1, s_Addr.size() - equal - 1);
        Student x;
        x.setID(ID);
        x.setAddr(Address);
        x.setDOB(DOB);
        x.setEmail(Email);
        x.setName(Name);
        x.setGPA(GPA);
        x.setTel(Tel);
        res.push_back(x);
    }

    return res;
}