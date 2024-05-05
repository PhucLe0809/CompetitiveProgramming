#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t a, b, d, rem, answer;
    while (test--){
        cin >> a >> b;
        d = b/a; rem = b%a;
        answer = rem*(d+1)*(d+1) + (a-rem)*d*d;
        cout << answer << '\n';
    }
    return 0;
}