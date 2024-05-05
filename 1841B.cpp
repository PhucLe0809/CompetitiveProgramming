#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x; bool check;
    while (test--){
        cin >> n;
        deque <int> dq; check = true;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (dq.empty()){
                cout << 1; dq.push_back(x); 
                continue;
            }
            if (check){
                if (x<=dq.front() || dq.back()<=x){
                    if (x<=dq.front() && x!=dq.back()) check = false;
                    cout << 1; dq.push_back(x);
                } else cout << 0;
            }else{
                if (dq.back()<=x && x<=dq.front()){
                    cout << 1; dq.push_back(x);
                }else cout << 0;
            }
        }
        cout << '\n';
    }
    return 0;
}