#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    int cnt = 0;
    int i = 0, j = n-1;
    while (i <= j){
        int temp = (i != j)?(inp[i] + inp[j]):(inp[i]); 
        if (temp <= x){
            cnt++;
            i++; j--;
        }else{
            cnt++;
            j--;
        }
    }
    cout << cnt;
    return 0;
}