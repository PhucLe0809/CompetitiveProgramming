#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int arr[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        for (int i = 0; i < 2*n; i++) cin >> arr[i];
        sort(arr, arr+2*n);
        cout << arr[2*n/2]-arr[2*n/2-1] << '\n';
    }
    return 0;
}