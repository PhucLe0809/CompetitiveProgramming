#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int x;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
    }
    int answer = 0;
    int cnt = 0;
    for (auto &it:mp){
        answer += (it.second/2)*2;
        cnt += (it.second%2);
    }
    answer += (cnt+1)/2;
    cout << answer;
    return 0;
}