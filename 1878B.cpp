#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> scan(n);
        scan[0] = 2; scan[1] = 3;
        cout << scan[0] << " " << scan[1] << " ";
        for (int i = 2; i < n; i++){
            scan[i] = scan[i-1] + 1;
            while (3*scan[i] % (scan[i-1]+scan[i-2]) == 0) scan[i]++;
            cout << scan[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}