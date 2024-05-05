#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    if (a==b || x==y) cout << "YES\n";
    else{
        while (a!=x && b!=y){
            if (a==b) break;
            a++; b--;
            if (a>n) a=1;
            if (b<1) b=n;
        }
        if (a==b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}