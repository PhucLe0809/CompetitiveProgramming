#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t i = 2, n, s;
    for (cin >> n, s = n; i*i <= n;) (n%i!=0)?(i++):(s += n/i, n /= i);
    cout << s+1;
    return 0;
}