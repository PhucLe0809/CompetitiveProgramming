#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    bool check, a, b;
    check = a = b = false;
    int n; cin >> n;
    string x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x==str) check = true;
        else{
            if (str[0]==x[1]) a = true;
            if (str[1]==x[0]) b = true;
        }
    }
    if (check || (a && b)) cout << "YES";
    else cout << "NO";
    return 0;
}