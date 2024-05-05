#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x, y; cin >> n >> x >> y;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int left, right;
    int pivot = -1;
    for (int i = 0; i < n; i++){
        left = INT_MAX;
        for (int j = i-1; j >= max(i-x, 0); j--) left = min(left, inp[j]);
        right = INT_MAX;
        for (int j = i+1; j <=min(n-1, i+y); j++) right = min(right, inp[j]);
        if (left>inp[i] && inp[i]<right){
            pivot = i+1; break;
        }
    }
    cout << pivot;
    return 0;
}