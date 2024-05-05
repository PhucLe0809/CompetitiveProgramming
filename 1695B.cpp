#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, minn, id;
    while (test--){
        cin >> n;
        vector <int> inp(n); minn = INT_MAX; id = -1;
        for (int i = 0; i < n; i++){
            cin >> inp[i]; 
            if (minn>inp[i]){
                minn = inp[i]; id = i;
            }
        }
        if (n%2!=0) cout << "Mike\n";
        else if (id%2==0) cout << "Joe\n"; else cout << "Mike\n";
    }
    return 0;
}