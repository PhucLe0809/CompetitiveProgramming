#include <bits/stdc++.h>

using namespace std; 
vector <pair<string, string>> name;

string find_ip(string ip){
    for (auto &x:name){
        if (x.second==ip) return x.first;
    }
    return "";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    string str, ansi;
    for (int i = 0; i < n; i++){
        cin >> str >> ansi;
        ansi += ";";
        name.push_back({str, ansi});
    }
    for (int i = 0; i < m; i++){
        cin >> str >> ansi;
        cout << str << " " << ansi << " #" << find_ip(ansi) << '\n';
    }
    return 0;
}