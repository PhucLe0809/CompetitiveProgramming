#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; bool check;
    while (test--){
        cin >> n;
        vector <int> a(n), b(n), c(n);
        set <int> st;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        check = true;
        for (int i = 0; i < n; i++){
            c[i] = b[i]-a[i];
            if (c[i]<0) check = false;
        }
        if (!check){ cout << "NO\n"; continue; }
        vector <int> scan; c.push_back(c.back()+1);
        for (int i = 0; i < n; i++){
            if (c[i]!=c[i+1] && c[i]!=0) scan.push_back(c[i]);
        }
        if (scan.size()<=1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}