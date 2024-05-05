#include <bits/stdc++.h>

using namespace std;

void tower(int n, int a, int b, int c){
    if (n == 1){
        cout << a << " " << b << '\n';
        return;
    }
    tower(n-1, a, c, b);
    tower(1, a, b, c);
    tower(n-1, c, b, a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    cout << int64_t(pow(2, n) - 1) << '\n';
    tower(n, 1, 3, 2);
    return 0;
}