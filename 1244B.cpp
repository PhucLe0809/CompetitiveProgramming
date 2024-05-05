#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; string str;
    int pivot, behind;
    while (test--){
        cin >> n >> str;
        pivot = -1;
        for (int i = 0; i < n; i++){
            if (str[i]=='1') {pivot = i; break; }
        }
        behind = -1;
        for (int i = n-1; i >= 0; i--){
            if (str[i]=='1') {behind = i; break; }
        }
        if (pivot==-1) cout << n << '\n';
        else cout << 2*max(max(pivot+1, n-pivot), max(n-behind, behind+1)) << '\n';
    }
    return 0;
}