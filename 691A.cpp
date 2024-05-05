#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    int one = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; if (inp[i]) one++;
    }
    if (n==1){
        if (one==1) cout << "YES"; else cout << "NO";
    }else{
        if (one==n-1) cout << "YES"; else cout << "NO";
    }
    return 0;
}