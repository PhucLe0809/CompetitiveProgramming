#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x; bool check = false;
    for (int i = 0; i < n; i++){
        cin >> x; 
        if (x==1) check = true;
    }
    if (check) cout << -1;
    else cout << 1;
    return 0;
}