#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; getline(cin, str);
    map <char, int> mp;
    for (auto &it:str){
        if (isdigit(it) || ('a' <= it && it <= 'z') ||  ('A' <= it && it <= 'Z')) mp[tolower(it)]++;
    }
    for (auto &it:mp) cout << it.first << " " << it.second << endl;
    return 0;
}