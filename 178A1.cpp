#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n+1), scan(n+1);
    for (int i = 1; i <= n; i++){
        cin >> inp[i]; scan[i] = inp[i];
    }
    if (n==1) return 0;
    vector <int> prefix(n+1); 
    prefix[0] = 0; int x;
    for (int i = 1; i < n; i++){
        x = int(log2(n-i));
        scan[i+int(pow(2, x))] += scan[i];
        prefix[i] = prefix[i-1]+scan[i];
    }
    // for (int i = 1; i < n; i++) cout << scan[i] << " "; cout << '\n';
    for (int i = 1; i < n; i++) cout << prefix[i] << '\n';
    return 0;
}