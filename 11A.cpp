#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int inp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, d; cin >> n >> d;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int cnt = 0;
    for (int i = 1; i < n; i++){
        if (inp[i-1]<inp[i]){}
        else{
            cnt += ((inp[i-1]-inp[i])/d+1);
            inp[i] += ((inp[i-1]-inp[i])/d+1)*d;
        }
    }
    cout << cnt;
    return 0;
}