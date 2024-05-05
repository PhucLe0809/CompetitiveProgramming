#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    int cnt = 0;
    for (int i = 0; i < n-1; i++){
        map <char, int> mp; mp[str[i]]++;
        for (int j = i+1; j < n; j++){
            mp[str[j]]++;
            if (mp['U']==mp['D'] && mp['L']==mp['R']) cnt++;
        }
    }
    cout << cnt;
    return 0;
}