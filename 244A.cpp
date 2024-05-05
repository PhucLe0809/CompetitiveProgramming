#include <bits/stdc++.h>

using namespace std;
int inp[35];
bool orange[1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    fill(orange, orange+n*k+1, false);
    for (int i = 1; i <= k; i++){
        cin >> inp[i]; orange[inp[i]]=true;
    }
    int m, t = 1;
    for (int i = 1; i <= k; i++){
        cout << inp[i] << " ";
        m = n-1;
        for (int j = t; j <= n*k && m; j++, t++){
            if (!orange[j]){
                cout << j << " ";
                orange[j] = true; m--; 
            }
        }
        cout << '\n';
    }
    return 0;
}