#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    map <char, int> mp;
    for (auto &it:str) mp[it]++;
    int even, odd; even = odd = 0;
    string odd_char = "";
    for (auto &it:mp){
        if (it.second & 1){
            odd++;
            for (int i = 0; i < it.second; i++) odd_char += it.first;
        }else even++;
    }
    if (odd > 1){
        cout << "NO SOLUTION"; return 0;
    }
    string out = "";
    for (auto &it:mp){
        if (it.second % 2 == 0){
            for (int i = 0; i < it.second/2; i++) out += it.first;
        }
    }
    cout << out;
    cout << odd_char;
    reverse(out.begin(), out.end());
    cout << out;
    return 0;
}