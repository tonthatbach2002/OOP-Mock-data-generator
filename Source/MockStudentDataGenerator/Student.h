#pragma once

class Student {
private:
    int _ID;
    Fullname _Name;
    string _Tel;
    string _Email;
    string _DOB;
    string _Address;
    float _GPA;
public:
    void setName(Fullname val) { this->_Name = val; }
    void setTel(string val) { this->_Tel = val; }
    void setEmail(string val) { this->_Email = val; }
    void setDOB(string  val) { this->_DOB = val; }
    void setAddr(string val) { this->_Address = val; }
    void setID(int ID) { this->_ID = ID; }
    void setGPA(float GPA) { this->_GPA = GPA; }

    Fullname getName() { return this->_Name; }
    string getTel() { return this->_Tel; }
    string getEmail() { return this->_Email; }
    string getDOB() { return this->_DOB; }
    string getAddr() { return this->_Address; }
    int getID() { return this->_ID; }
    float getGPA() { return this->_GPA; }
public:

    string toString(Student);
       

};

class StudentDatabase {
private:
    string _filename;
public:
    StudentDatabase(string filename) {
        this->_filename = filename;
    }
public:
    vector<Student> all();
       
    
};
