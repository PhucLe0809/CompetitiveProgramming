#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int a, b; a = b = 0;
    for (auto x:str){
        if (x=='-') a++;
        else b++;
    }
    if (a==0 || b==0) cout << "YES\n";
    else if (a%b==0) cout << "YES\n";
        else cout << "NO\n";
    return 0;
}