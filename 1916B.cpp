#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int a, b; cin >> a >> b;
    int answer;
    if (b % a == 0) answer = (b / a) * b;
    else answer = (b * a) / __gcd(a, b);
    cout << answer << endl;
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