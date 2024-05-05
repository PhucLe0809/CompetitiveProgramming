#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        char key; cin >> key;
        sum += (key == '+')?(1):(-1);
    }
    cout << abs(sum) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}