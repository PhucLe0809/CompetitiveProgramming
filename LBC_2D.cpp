#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int bi[25];

void output(int n, int m){
    bool check = false;
    int cnt = 0; bi[n+1] = 0;
    for (int i = 1; i <= n+1; i++){
        if (bi[i] == 1) cnt++;
        else check = check || (cnt == m), cnt = 0;
    } 
    if (check){
        for (int i = 1; i <= n; i++) cout << bi[i];
        cout << endl;
    }
}
void bina(int n, int k, int m){
    for (int i = 0; i < 2; i++){
        bi[k] = i;
        if (k == n) output(n, m);
        else bina(n, k+1, m);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    bina(n, 1, m);
    return 0;
}