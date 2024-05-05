#include <bits/stdc++.h>

using namespace std;
int arr[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> arr[i];
        sort(arr+1, arr+n+1);
        x = 0;
        for (int i = 1; i <= n; i++){
            if (i>=arr[i]) x = i;
        }
        cout << x+1 << '\n';
    }
    return 0;
}