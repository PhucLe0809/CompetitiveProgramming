#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, d; cin >> n >> d;
    vector <int64_t> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int res, cnt; cnt = 0; res = n;
    sort(inp.begin(), inp.end(), greater<>());
    int ele, i = 0;
    while (i < n){
        ele = ceil(d*1.0/inp[i]);
        if (res>=ele){
            if (ele*inp[i]>d){
                cnt++; res -= ele;
            }else if (res>ele){
                cnt++; res -= (ele+1);
            }
            i++;
        }else break;
    }
    cout << cnt;
    return 0;
}