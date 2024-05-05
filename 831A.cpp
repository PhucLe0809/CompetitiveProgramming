#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    vector <int> scan(n-1);
    for (int i = 1; i < n; i++) scan[i-1] = (inp[i]-inp[i-1]==0)?(0):(inp[i]-inp[i-1]>0?(1):(-1));
    vector <int> unimodal = scan;
    sort(scan.begin(), scan.end(), greater<>());
    bool check = true;
    for (int i = 0; i < n-1 && check; i++){
        check = (scan[i]==unimodal[i]);
    }
    (check)?(cout << "YES\n"):(cout << "NO\n");
    return 0;
}