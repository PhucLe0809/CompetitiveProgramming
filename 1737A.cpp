#include <bits/stdc++.h>

using namespace std;
int a[255];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k;
    string str;
    int i, j;
    while (test--){
        cin >> n >> k >> str;
        fill(a, a+255, 0);
        for (auto x:str) a[int(x)]++;
        for (i = 1; i <= k; i++){
            for (j = 97; a[j] && j<97+n/k; j++) a[j]--;
            cout << char(j);
        }
        cout << '\n';
    }
    return 0;
}