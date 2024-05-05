#include <bits/stdc++.h>

using namespace std;
int a[1005], b[1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, s; cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    if (a[1]==0) cout << "NO";
    else if (a[s]==1) cout << "YES";
        else{
            int t = s;
            while ((a[t]!=1 || b[t]!=1) && t<=n) t++;
            if (t>n) cout << "NO";
            else{
                if (b[s]==1) cout << "YES";
                else cout << "NO";
            }
        }
    return 0;
}