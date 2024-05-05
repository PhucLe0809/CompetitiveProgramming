#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; int arr[105];
    while (test--){
        cin >> n; 
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n, greater<>());
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << '\n';
    }
    return 0;
}