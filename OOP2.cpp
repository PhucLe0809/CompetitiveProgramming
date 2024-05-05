#include <bits/stdc++.h>

using namespace std; 

//base class: lớp cha
//derived class: lớp con
//access mode
//access modifier

class person{
    private:
        string name;
        string address;
    public:
        person(string name, string address){
            this->name = name;
            this->address = address;
        }
        void input(){
            getline(cin, name);
            getline(cin, address);
        }
        string get_name(){
            return name;
        }
        string get_address(){
            return address;
        }
        void set_name(string name){
            this->name = name;
        }
        void set_address(string address){
            this->address = address;
        }
        void print(){
            cout << name << endl << address << endl;
        }
};

class student: public person{
    private:
        double gpa;
    public:
        student(string name, string address, double gpa):person(name, address){
            this->gpa = gpa;
        }
        void input(){
            person::input();
            cin >> gpa;
        }
        double get_gpa(){
            return gpa;
        }
        void set_gpa(double gpa){
            this->gpa = gpa;
        }
        //function overriding
        void print(){
            // cout << get_name() << endl;
            // cout << get_address() << endl;
            person::print();
            cout << fixed << setprecision(2) << gpa;
        }
};

class lecturer : public person{
    private: 
        double salary;
    public:
};

class A{
    public:
        A(){
            cout << "Constructor A\n";
        }
        ~A(){
            cout << "Destructor A\n";
        }
};
class B: public A{
    public:
        B(){
            cout << "Constructor B\n";
        }
        ~B(){
            cout << "Destructor B\n";
        }
        void hello(){
            cout << "Xin chao B!\n";
        }
};
class C: public B{
    public:
        C(){
            cout << "Constructor C\n";
        }
        ~C(){
            cout << "Destructor C\n";
        }
};

int main() 
{
    C obj; //multilevel inheritance
    obj.hello();
    // student s("Le Hong Phuc", "Tp.HCM", 3.67);
    // s.set_name("Le Hong Phuc");
    // s.set_address("Tp.HCM");
    // s.set_gpa(3.67);
    // s.person::input();
    // s.print();
    return 0;
}