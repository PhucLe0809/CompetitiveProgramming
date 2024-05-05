#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int64_t arr[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, t, k, tmp;
    int64_t cnt;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> arr[i];
        t = 0;
        while (arr[t]<=0) t++;
        k = t+1;
        queue <int> pos;
        while (k<n){
            if (arr[k]<0){
                tmp = min(arr[t], abs(arr[k]));
                arr[k] += tmp; arr[t] -= tmp;
                if (arr[k]==0 || pos.empty()) k++;
                if (arr[t]==0){
                    if (pos.size()){
                        t = pos.front(); pos.pop();
                    }
                }
            }else{
                if (arr[k]>0) pos.push(k);
                k++;
            }
        }
        cnt = 0;
        for (int i = 0; i < n; i++){
            if (arr[i]>0) cnt += arr[i];
        }
        cout << cnt << '\n';
    }
    return 0;
}