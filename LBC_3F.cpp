#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int count_value(int n){
    int cnt = 0;
    while (n){
        cnt += (int)(n % 2 == 0);
        n /= 2;
    }
    return (int)pow(2, cnt);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 1; i <= test; i++){
        int n; cin >> n;
        cout << "Case #" << i << ": " << count_value(n) << endl;
    }
    return 0;
}