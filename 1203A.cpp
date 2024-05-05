#include <bits/stdc++.h>

using namespace std;

bool clockwise(deque <int> scan, int n){
    int infront = 0;
    for (auto &it:scan){
        if (infront!=it-1) return false;
        else infront = it;
    }
    return true;
}
bool counterclockwise(deque <int> scan, int n){
    int infront = n+1;
    for (auto &it:scan){
        if (infront!=it+1) return false;
        else infront = it;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x;
    while (test--){
        cin >> n;
        deque <int> a, b;
        for (int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
            b.push_back(x);
        }
        while (a.front()!=1) {a.push_back(a.front()); a.pop_front(); }
        while (b.front()!=n) {b.push_back(b.front()); b.pop_front(); }
        if (clockwise(a, n) || counterclockwise(b, n)) cout << "YES\n";
        else cout << "NO\n"; 
    }
    return 0;
}