#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int cnt = 0;
    int i = 0, n = str.size();
    while (i < n/2){
        if (str[i]!=str[n-i-1]) cnt++;
        i++;
    }
    if (cnt>1) cout << "NO\n";
    else{
        if (cnt==1) cout << "YES\n";
        else{
            if (n%2!=0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}