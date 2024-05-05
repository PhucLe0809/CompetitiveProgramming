#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; string str; bool check;
    while (test--){
        cin >> n >> str;
        check = true;
        for (int i = 0; i < n/2 && check; i++){
            if (abs(str[i]-str[n-i-1])!=0 && abs(str[i]-str[n-i-1])!=2) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}