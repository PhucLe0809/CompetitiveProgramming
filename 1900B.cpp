#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool check(int a, int b, int c){
    return (abs(b - c) % 2 == 0);
}
void GOTOHANOI(){
    int a, b, c; cin >> a >> b >> c;
    cout << check(a, b, c) << " ";
    cout << check(b, a, c) << " ";
    cout << check(c, a, b) << endl; 
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