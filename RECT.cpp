#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a, b;
    if (n % 4 == 0) a = b = n/4;
    else a = n/4, b = a+1;
    cout << a * b; 
    return 0;
}