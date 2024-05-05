#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int pre = 1; int res = 0;
    for (int i = 0; i < 4; i++){
        char key; cin >> key;
        int pivot = (key != '0')?(key - '0'):(10);
        res += abs(pivot - pre);
        res++; pre = pivot;
    }
    cout << res << endl;
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