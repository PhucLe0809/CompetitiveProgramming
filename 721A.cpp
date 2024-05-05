#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> save;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t cnt = 1;
    str += 'W';
    for (int i = 1; i <= n; i++){
        if (str[i]==str[i-1] && str[i]=='B') cnt++;
        else{
            if (str[i-1]=='B' && str[i]=='W') save.push_back(cnt);
            cnt = 1;
        }
    }
    cout << save.size() << '\n';
    for (auto it:save) cout << it << " ";
    return 0;
}