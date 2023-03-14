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

#pragma warning(disable : 4996)
using namespace std;
#include "NameGenerator.h"
#include "Student.h"
#include "RandomIntegerGenerator.h"
#include "RandomTelephoneGenerator.h"
#include "EmailGenerator.h"
#include "GPAGenerator.h"
#include "AddressGenerator.h"
#include "IDGenerator.h"
#include"BirthDayGenerator.h"

int main()
{
    srand(time(NULL));

    RandomIntegerGenerator rng;
    StudentDatabase Sdb("students.txt");
    vector<Student> list = Sdb.all();
    int n = rng.next(5,10);
    for (int i = 0; i < n; i++) {
        Student x;
        RandomVietnamFullnameGenerator rvfg;
        Fullname Name = rvfg.next();
        EmailGenerator EG;
        string Email = EG.next(Name);
        IDGenerator IG;
        int ID = stoi(IG.next());
        RandomTelephoneGenerator rtg;
        string Tel = rtg.next();
        GPAGenerator GPAG;
        float GPA = GPAG.next(5.00, 10.00);
        BirthDayGenerator bdg;
        Date y = bdg.next(18);
        string DOB = y.toString();
        AddressGenerator AG;
        string Address = AG.next();
        x.setID(ID);
        x.setAddr(Address);
        x.setDOB(DOB);
        x.setEmail(Email);
        x.setName(Name);
        x.setGPA(GPA);
        x.setTel(Tel);
        list.push_back(x);
    }
    ofstream writer;
    writer.open("students.txt");
    float AverageGPA = 0;
    for (int i = 0; i < list.size(); i++)
    {
        writer << list[i].toString(list[i]);
        if (i != list.size() - 1) {
            writer << endl;
        }
        AverageGPA += list[i].getGPA();
    }
    cout << "AverageGPA: " << AverageGPA / list.size() << endl;
    cout << "Students with higher than Average GPA:" << endl;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i].getGPA() > AverageGPA / list.size()) {
            cout << list[i].getID() << " - " << list[i].getName().toString() << ", " << "GPA:" << list[i].getGPA() << endl;
        }
       
    }
    cin.get();
    return 0;
}

