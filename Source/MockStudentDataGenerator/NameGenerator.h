#pragma once

class Fullname {
private:
    string _fName;
    string _mName;
    string _lName;
public://prop
    string getfName() { return _fName; }
    string getmName() { return _mName; }
    string getlName() { return _lName; }

    void setfName(string val) { _fName = val; }
    void setmName(string val) { _mName = val; }
    void setlName(string val) { _lName = val; }
public://constructor
    Fullname() {
        _fName = "";
        _mName = "";
        _lName = "";
    }
    Fullname(string fName, string mName, string lName) {
        _fName = fName;
        _mName = mName;
        _lName = lName;
    }
public://output
    string toString();
    
};
class RandomVietnamFullnameGenerator {
private:
    string First[5] = { "Nguyen", "Tran", "Phan", "Le","Truong" };
    string Mid[5] = { "Nhu","Vinh","Tuan","Gia","Nhat" };
    string Last[5] = { "Phuoc","Tuyen","Duong","Khai","Quan" };
public:
    Fullname next();
     

    
};