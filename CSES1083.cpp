#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <bool> tick(n, false);
    for (int i = 1; i < n; i++){
        int x; cin >> x;
        tick[--x] = true;
    }
    for (int i = 0; i < n; i++){
        if (!tick[i]){
            cout << i+1; 
            return 0;
        }
    }
    return 0;
}