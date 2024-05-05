#include <bits/stdc++.h>

using namespace std;

string str_subtrac(string a, string b){
    string calc = "";
    int n = max(a.size(), b.size());
    while (a.size() < n) a.insert(a.begin(), '0');
    while (b.size() < n) b.insert(b.begin(), '0');
    string sign;
    int res = 0, up, subtrac;
    if (a < b){
        swap(a, b); sign = "-"; 
    } else sign = "";
    for (int i = n-1; i > 0; i--){
        up = (a[i] + res < b[i])?(1):(0);
        subtrac = (int(a[i])-48+res + up*10) - (int(b[i])-48); 
        calc = char(subtrac + '0') + calc;
        if (up == 1) res = -1; else res = 0;
    }
    up = (a[0]+res < b[0])?(1):(0);
    subtrac = (int(a[0])-48+res + up*10) - (int(b[0])-48); 
    calc = char(subtrac + '0') + calc;
    while (calc.size() > 1 && calc[0] == '0') calc.erase(calc.begin());
    calc = sign + calc;
    return calc;
}

int main(){
    string a, b; cin >> a >> b;
    cout << str_subtrac(a, b);
    return 0;
}