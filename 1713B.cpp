#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int arr[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m; bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> arr[i];
        m = max_element(arr, arr+n)-arr;
        check = true;
        for (int i = 0; i<m && check; i++){
            if (arr[i]>arr[i+1]) check = false;
        }
        for (int i = m; i<n-1 && check; i++){
            if (arr[i]<arr[i+1]) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}