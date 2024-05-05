#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        if (n==1) { cout << "YES\n"; continue; }
        vector <int> scan(5);
        for (int i = 1; i < n; i++) scan[min(inp[i]-inp[i-1], 4)]++;
        if (scan[4]>0) cout << "NO\n";
        else{
            if (scan[3]==1 && scan[2]==0) { cout << "YES\n"; continue; }
            if (scan[3]==0 && scan[2]<=2) { cout << "YES\n"; continue; }
            cout << "NO\n";
        }
    }
    return 0;
}