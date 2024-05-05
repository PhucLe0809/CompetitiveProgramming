// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
int n;

int request(deque<pair<int, int>>& que, int &dam){
    if (que.empty()){
        que.push_back({dam, 0});
        return 0;
    }
    int destroy = 0;
    while (!que.empty() && que.back().first < dam){
        destroy += que.back().second + 1;
        que.pop_back();
    }
    que.push_back({dam, destroy});
    return destroy;
}

void GOTOHANOI(){
    
    cin >> n;
    deque <pair<int, int>> male;
    deque <pair<int, int>> female;
    for (int i = 0; i < n; i++){
        int damage, gender, res;
        cin >> damage >> gender;
        if (gender) res = request(male, damage);
        else res = request(female, damage);
        cout << res << " ";
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