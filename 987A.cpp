#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str;
    map <string, int32_t> mp;
    mp["purple"] = mp["green"] = mp["blue"] = 1;
    mp["orange"] = mp["red"] = mp["yellow"] = 1;
    for (int i = 0; i < n; i++){
        cin >> str;
        mp[str]++;
    }
    cout << 6-n << '\n';
    for (auto it:mp){
        if (it.second==1){
            if (it.first=="purple") cout << "Power\n";
            if (it.first=="green") cout << "Time\n";
            if (it.first=="blue") cout << "Space\n";
            if (it.first=="orange") cout << "Soul\n";
            if (it.first=="red") cout << "Reality\n";
            if (it.first=="yellow") cout << "Mind\n";
        }
    }
    return 0;
}