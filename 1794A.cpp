#include <bits/stdc++.h>

using namespace std; 
string inp[105];

bool comp(string a, string b){
    return (a.size() < b.size());
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; 
    bool check;
    string str;
    while (test--){
        cin >> n; n = 2*n-2;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n, comp);
        check = true;
        for (int i = 0; i<n && check; i+=2){
            str = inp[i+1];
            reverse(str.begin(), str.end());
            if (inp[i]!=str){
                check = false;
                //cout << inp[i] << " " << str;
            }
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}