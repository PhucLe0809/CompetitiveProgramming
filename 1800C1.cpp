#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    int64_t s, x;
    while (test--){
        cin >> n;
        priority_queue <int64_t> pq;
        s = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x==0){
                if (!pq.empty()){
                    s += pq.top(); pq.pop();
                }
            }else pq.push(x);
        }
        cout << s << '\n';
    }
    return 0;
}