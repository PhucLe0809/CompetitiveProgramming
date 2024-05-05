#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int answer = 0;
    int cnt, t = 0;
    while (t<n){
        if (inp[t]==0) { t++; continue;}
        cnt = 1;
        while (t<n-1 && inp[t+1]==1-inp[t]){
            cnt++; t++;
        }
        if (inp[t]==0) cnt--;
        cnt = (cnt+1)/2;
        answer += cnt/2; t++;
    }
    cout << answer;
    return 0;
}