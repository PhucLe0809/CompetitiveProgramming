#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a, b; char oper; cin >> a >> oper >> b;
    switch (oper){
        case '+': cout << fixed << setprecision(2) << a + b; break;
        case '-': cout << fixed << setprecision(2) << a - b; break;
        case '*': cout << fixed << setprecision(2) << a * b; break;
        case '/': (b != 0) ? (cout << fixed << setprecision(2) << a / b):(cout << "Math Error"); break;
    }
    return 0;
}