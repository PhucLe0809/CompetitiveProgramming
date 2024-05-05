#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    for (int i = 0; i < a-b; i++){
        for (int j = 0; j < a; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = a-b; i < a; i++){
        for (int j = 0; j < a-b; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}