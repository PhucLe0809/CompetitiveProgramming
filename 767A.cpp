#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n; 
    priority_queue <int, vector<int>> que;
    int num = n;
    for (int i = 0; i < n; i++){
        int x; cin >> x; que.push(x);
        while (!que.empty() && num == que.top()){
            cout << num << " "; 
            num--; que.pop();
        }
        cout << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}