#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    vector <int> one(n);
    for (int i = 0; i < n; i++) cin >> one[i];
    vector <int> two(m);
    for (int i = 0; i < m; i++) cin >> two[i];
    sort(one.begin(), one.end());
    sort(two.begin(), two.end());
    int cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < m){
        if (abs(one[i] - two[j]) <= k){
            cnt++; 
            i++; j++;
        }else{
            if (one[i] > two[j]) j++;
            else i++;
        }
    }
    cout << cnt;
    return 0;
}