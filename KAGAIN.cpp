#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n+2);
    for (int i = 1; i <= n; i++) cin >> inp[i];

    inp[0] = inp[n+1] = LONG_MIN;
    vector <int> mleft(n+2);
    deque <int> one; one.push_back(0);
    for (int i = 1; i <= n; i++){
        while (!one.empty() && inp[one.back()] >= inp[i]) one.pop_back();
        mleft[i] = one.back(); 
        one.push_back(i);
        // cout << mleft[i] << " ";
    }
    // cout << endl;
    vector <int> mright(n+2);
    deque <int> two; two.push_front(n+1);
    for (int i = n; i >= 1; i--){
        while (!two.empty() && inp[two.front()] >= inp[i]) two.pop_front();
        mright[i] = two.front();
        two.push_front(i);
        // cout << mright[i] << " ";
    }
    // cout << endl;

    int res = LLONG_MIN, s = -1, t = -1;
    for (int i = 1; i <= n; i++){
        int l = mleft[i], r = mright[i];
        int calc = inp[i] * (r - l - 1);
        if (res < calc){
            res = calc; s = l+1; t = r-1;
        }
    }

    cout << res << " " << s << " " << t << endl;
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