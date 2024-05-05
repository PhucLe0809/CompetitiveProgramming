#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int sum = 0;
    priority_queue <int, vector<int>> que;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x) que.push(x);
        else{
            if (!que.empty()){
                sum += que.top(); que.pop();
            }
        }
    }
    cout << sum << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}