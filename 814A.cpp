#include <bits/stdc++.h>

using namespace std;
vector <int> a, b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int x, zero, cnt;
    zero = cnt = 0;
    a.push_back(INT_MIN);
    for (int i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
        if (x==0) cnt++;
        else{
            zero = max(zero, cnt);
            cnt = 0;
        }
    }
    a.push_back(INT_MAX);
    int m = INT_MAX;
    for (int i = 0; i < k; i++){
        cin >> x;
        m = min(m, x);
    }
    bool check = false;
    for (int i = 1; i <= n && !check; i++){
        if (a[i]==0){
            if (a[i-1]>m || m>a[i+1]){
                check = true; break;
            }
        }else{
            if (a[i]<a[i-1]) check = true;
        }
    }
    if (check) cout << "Yes";
    else cout << "No";
    return 0;
}