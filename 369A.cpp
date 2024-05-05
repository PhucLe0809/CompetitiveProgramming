#include <bits/stdc++.h>

using namespace std;
int inp[1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int cnt = 0;
    int i = 0;
    while (i<n){
        if (inp[i]==2){
            if (k>0) k--;
            else{
                if (m>0) m--;
                else cnt++;
            }
        }
        if (inp[i]==1){
            if (m>0) m--;
            else cnt++;
        }
        i++;
    }
    cout << cnt;
    return 0;
}