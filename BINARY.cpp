#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 25

using namespace std;
int bi[maxarray];

void print(int n){
    for (int i = 1; i <= n; i++) cout << bi[i];
    cout << endl;
}
void bina(int n, int k){
    for (int i = 0; i < 2; i++){
        bi[k] = i;
        (k == n) ? (print(n)):(bina(n, k+1));
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; 
    bina(n, 1);
    return 0;
}