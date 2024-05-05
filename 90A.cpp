#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int r, g, b; cin >> r >> g >> b;
    cout << max({0 + ((r+1)/2-1)*3, 1 + ((g+1)/2-1)*3, 2 + ((b+1)/2-1)*3}) + 30;
    return 0;
}