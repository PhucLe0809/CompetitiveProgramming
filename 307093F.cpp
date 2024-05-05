#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct newsta{
    vector <int> s, smin = {LLONG_MAX}, smax = {LLONG_MIN};

    void push(int x){
        s.push_back(x);
        smin.push_back(min(smin.back(), x));
        smax.push_back(max(smax.back(), x));
    }
    int pop(){
        int res = s.back();
        s.pop_back();
        smin.pop_back();
        smax.pop_back();
        return res;
    }
    bool empty(){
        return s.empty();
    }
    int get_min(){
        return smin.back();
    }
    int get_max(){
        return smax.back();
    }
};
int n, k;
newsta s1, s2;

void add(int x){
    s2.push(x);
}
void remove(){
    if (s1.empty()){
        while (!s2.empty()){
            s1.push(s2.pop());
        }
    }
    s1.pop();
}
bool is_good(){
    int mn = min(s1.get_min(), s2.get_min());
    int mx = max(s1.get_max(), s2.get_max());
    return mx - mn <= k;
}

void GOTOHANOI(){
    cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int l = 0, r = 0, cnt = 0;
    while (r < n){
        add(inp[r]);
        while (!is_good()){
            remove(); l++;
        }
        cnt += (r - l + 1);
        r++;
    }
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}