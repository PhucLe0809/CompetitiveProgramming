#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    int a, b; a = b = -1;
    for (int i = 0; i < n-1 && a==-1; i++){
        if (str[i]>str[i+1]){
            a=i; b=i+1;
        }
    }
    if (a==-1) cout << "NO\n";
    else cout << "YES\n" << ++a << " " << ++b;
    return 0;
}