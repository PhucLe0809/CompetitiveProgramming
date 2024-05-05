#include <bits/stdc++.h>

using namespace std; 

//class: lớp
//object: đối tượng
//constructor: hàm tạo
//destructor: hàm hủy
//setter getter
//static
//friend funcion, friend class
//forward declaration
//operator overloading
//thuộc tính: attribute -> private
//phương thức: method, behavior -> public

//-Encapsulation: đóng gói
//-Access modifier: phạm vi truy cập
//--private, public, protected

class teacher;
class student;
class compnum;

class student{
    //friend class
    friend class teacher;
    //attribute & behavior
    private:
        string id, name, birth;
        double gpa;
        static int cnt; //dùng chung cho mọi biến trong class
    public:
        student(); //constructor
        student(string, string, string, double); //constructor
        void input();
        void output();
        //member function
        void hello();
        void go_school();
        //getter setter
        double get_gpa();
        void set_gpa(double);
        //static
        void incnt();
        int get_cnt();
        //friend function
        friend void print(student);
        friend void normal(student&);
        //operator overloading
        friend istream& operator >> (istream &in, student &a);
        friend ostream& operator << (ostream &out, student a);
        bool operator < (student another); //sort by this
        friend bool operator > (student a, student b);
        //destructor
        ~student(); 
};

//static
int student::cnt = 0;
void student::incnt(){
    cnt++;
}
int student::get_cnt(){
    return cnt;
}
//friend function
void print(student x){
    cout << x.id << endl << x.name << endl;
    cout << x.birth << endl << x.gpa << endl;
    cout << "------------------------\n";
}
void normal(student &x){
    string str = x.name;
    while (str[0]==' ') str.erase(0, 1);
    while (str[str.size()-1]==' ') str.erase(str.size()-1, 1);
    int i = 0;
    while (i < str.size()-1){
        if (str[i]==str[i+1] && str[i]==' ') str.erase(i, 1);
        else i++;
    }
    str[0] = toupper(str[0]);
    for (int i = 0; i < str.size(); i++){
        if (str[i]==' ') str[i+1]=toupper(str[i+1]);
    }
    x.name = str;
}
//-Implementation
istream& operator >> (istream &in, student& a){
    cout << "ID: "; in >> a.id;
    cout << "Name: "; in.ignore(); getline(in, a.name);
    cout << "Birthday: "; in >> a.birth;
    cout << "GPA: "; in >> a.gpa;
    return in;
}
ostream& operator << (ostream &out, student a){
    cout << a.id << endl << a.name << endl;
    cout << a.birth << endl << a.gpa << endl;
    return out;
}
bool student::operator < (student another){
    return this->gpa < another.gpa;
}
bool operator > (student a, student b){
    return a.gpa > b.gpa;
}

student::student(){
    // cout << "Constructor\n";
    // id = name = birth = "";
    // gpa = 0.0;
}
student::student(string id, string name, string ns, double diem){
    //this pointer
    this->id = id;
    this->name = name;
    //basic
    birth = ns;
    gpa = diem;
}
student::~student(){
    // cout << "Destructor\n";
}
void student::input(){
    // cout << "ID: "; cin >> id;
    cnt++; 
    this->id = "ST" + string(3-to_string(cnt).size(), '0') + to_string(cnt);
    cout << "Name: "; getline(cin, name);
    cout << "Birthday: "; cin >> birth;
    cout << "GPA: "; cin >> gpa;
    cin.ignore();
}
void student::output(){
    cout << id << endl << name << endl;
    cout << birth << endl << gpa << endl;
    cout << "------------------------\n";
}
void student::hello(){
    cout << "Hello\n";
}
void student::go_school(){
    cout << "Go to school\n";
}
double student::get_gpa(){
    return this->gpa;
}
void student::set_gpa(double gpa){
    this->gpa = gpa;
}
bool cmp(student a,student b){
    return a.get_gpa() < b.get_gpa();
}

class teacher{
    private:
        string faculty;
    public:
        void update(student&);
};
void teacher::update(student& x){
    x.gpa = 3.20;
}

class compnum{
    private:
        double real;
        double comp;
    public:
        friend istream& operator >> (istream& in, compnum &a);
        friend ostream& operator << (ostream& out, compnum a);
        compnum operator + (compnum another);
        compnum operator - (compnum another);
        bool operator == (compnum another);
};
istream& operator >> (istream& in, compnum &a){
    in >> a.real >> a.comp;
    return in;
}
ostream& operator << (ostream& out, compnum a){
    cout << a.real << " " << a.comp << "i";
    return out;
}
compnum compnum::operator + (compnum another){
    compnum res;
    res.real = this->real + another.real;
    res.comp = this->comp + another.comp;
    return res;
}
compnum compnum::operator - (compnum another){
    compnum res;
    res.real = this->real - another.real;
    res.comp = this->comp - another.comp;
    return res;
}
bool compnum::operator == (compnum another){
    return (this->real==another.real)&&(this->comp==another.comp);
}


int main() 
{
    compnum a, b;
    cin >> a >> b;
    compnum x = a+b;
    compnum y = a-b;
    cout << x << endl << y << endl;
    if (x==y) cout << "YES\n";
    else cout << "NO\n";
    // student arr[105];
    // int n; cin >> n;
    // for (int i = 0; i < n; i++){
    //     arr[i].input();
    // }
    // sort(arr, arr+n, cmp);
    // for (int i = 0; i < n; i++){
    //     arr[i].output();
    //     cout << endl;
    // }
    return 0;
}