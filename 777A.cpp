#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    n %= 6;
    vector <int> shell(3); shell[x] = 1;
    while (n){
        if (n%2!=0) swap(shell[0], shell[1]);
        else swap(shell[1], shell[2]);
        // cout << shell[0] << shell[1] << shell[2] << endl;
        n--;
    }
    for (int i = 0; i < 3; i++){
        if (shell[i]){
            cout << i; break;
        }
    }
    return 0;
}