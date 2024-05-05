#include <bits/stdc++.h>

using namespace std; 
map <char, int> mp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str;
    for (int i = 0; i < n; i++){
        cin >> str;
        mp[str[0]]++;
    }
    int m, a, b;
    int answer = 0;
    for (auto &x:mp){
        m = x.second;
        a = round(m/2.0);
        b = m-a;
        answer += (a*(a-1)/2+b*(b-1)/2);
    }
    cout << answer;
    return 0;
}