#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct student{
    string name;
    int x, y, z;

    void output(){
        cout << name << " " << x << " " << y << " " << z;
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; cin.ignore(1);
    vector <student> stu(n);
    for (int i = 0; i < n; i++){
        string str; getline(cin, str);
        stu[i].name = str;
    }
    for (auto &it:stu) cin >> it.x;
    for (auto &it:stu) cin >> it.y;
    for (auto &it:stu) cin >> it.z;
    map <int, vector<student>> mp;
    for (auto &it:stu){
        mp[it.x + it.y + it.z].push_back(it);
    }
    vector <student> out = (--(mp.end())) -> second;
    for (auto &it:out) it.output(), cout << endl;
    return 0;
} 