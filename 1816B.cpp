#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        vector <int> one(n);
        for (int i = 0; i < n; i++){
            if (!(i&1)){ one[i] = 2*n-i;}
            else{ one[i] = i+1; }
        }
        vector <int> two(n);
        for (int i = 0; i < n; i++){
            if (!(i&1)){ two[i] = i+1;}
            else{ two[i] = i+n; }
        }
        for (auto &it:one) cout << it << " "; cout << '\n';
        for (auto &it:two) cout << it << " "; cout << '\n';
    }
    return 0;
}