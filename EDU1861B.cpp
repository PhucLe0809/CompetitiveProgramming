#include <bits/stdc++.h>
#define maxarray 5005

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    vector <bool> zero(maxarray), one(maxarray);
    while (test--){
        string a, b; cin >> a >> b;
        fill(zero.begin(), zero.end(), false);
        fill(one.begin(), one.end(), false);
        for (int i = 0; i < a.size(); i++){
            if (a[i] == b[i]){
                (a[i] == '0')?(zero[i] = true):(one[i] = true);
            }
        }
        bool check = false;
        for (int i = 0; i < a.size()-1; i++){
            if (zero[i] && one[i+1]){
                check = true; break;
            }
        }
        if (check) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}