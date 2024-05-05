#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x; bool check;
    while (test--){
        cin >> n;
        deque <int> a, b, c;
        vector <int> t;
        for (int i = 0; i < n; i++){
            cin >> x; a.push_back(x);
            t.push_back(x);
        }
        for (int i = 0; i < n; i++){
            if (a.front()>a.back()){
                b.push_back(a.back()); a.pop_back();
            }else{
                b.push_front(a.front()); a.pop_front();
            }
        }
        vector <int> h;
        for (auto &it:b){
            h.push_back(it); // cout << it << " ";
        }
        for (int i = 0; i < n; i++){
            if (b.front()==b.back()){
                if (b.back()==t.back()){
                    c.push_back(b.back());
                }else c.push_front(b.back());
            }
            if (b.front()>b.back()){
                c.push_back(b.back()); b.pop_back();
            }
            if (b.front()<b.back()){
                c.push_front(b.front()); b.pop_front();
            }
        }
        check = true;
        // for (auto it:c) cout << it << " "; cout << '\n';
        for (int i = 0; i<n && check; i++){
            if (t[i]!=c[i]) check = false;
            // cout << t[i] << " " << c[i] << '\n';
        }
        if (!check) cout << -1;
        else for (auto &it:h) cout << it << " "; 
        cout << '\n';
    }
    return 0;
}