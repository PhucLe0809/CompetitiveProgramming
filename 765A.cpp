#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    string x;
    for (int i = 0; i < n; i++) cin >> x;
    if (n%2==0) cout << "home";
    else cout << "contest";
    return 0;
}