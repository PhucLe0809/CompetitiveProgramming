#include <bits/stdc++.h>

using namespace std;
int arr[1005], out[1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; test = 1;
    int n, p, q;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> arr[i];
        for (int i = 1; i <= n; i++){
            p = arr[i]; q = arr[arr[i]];
            while (p!=q){
                p = arr[p];
                q = arr[arr[q]];
            }
            p = i;
            while (p!=q){
                p = arr[p];
                q = arr[q];
            }
            out[i] = p;
        }
        for (int i = 1; i <= n; i++) cout << out[i] << " ";
        cout << '\n';
    }
    return 0;
}