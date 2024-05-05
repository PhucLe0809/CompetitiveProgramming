#include <bits/stdc++.h>

using namespace std; 

struct student{
    string name, address;
    int age;
};

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y; *y = tmp;
}

int main() 
{
    int *a = new int[100000000]; //heap memory
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    delete[] a;
    // student x;
    // x.name = "Le Hong Phuc";
    // x.age = 18;
    // x.address = "Dong Thap";
    // student *ptr = &x;
    // cout << ptr->name << endl;
    // cout << (*ptr).age << endl;
    // cout << ptr->address << endl;
    // int n = 10, m = 35;
    // swap(&n, &m);
    // cout << n << endl << m << endl;
    return 0;
}