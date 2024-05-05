#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int arr[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, q, cnt;
    int64_t answer;
    while (test--){
        cin >> n >> k >> q;
        for (int i = 0; i < n; i++) cin >> arr[i];
        arr[n] = q+1;
        answer = cnt = 0;
        for (int i = 0; i <= n; i++){
            if (arr[i]<=q) cnt++;
            else{
                if (cnt<k){
                    cnt = 0; continue;
                }
                for (int t = k; t <= cnt; t++){
                    answer += int64_t(cnt-t+1);
                }
                cnt = 0;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}