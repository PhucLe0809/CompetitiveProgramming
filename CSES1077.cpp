#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int bit[maxarray], getval[maxarray];

void update(int n, int pos, int val){
    for ( ; pos <= n; pos += (pos&(-pos))) bit[pos] += val;
}
int get(int pos){
    int out = 0;
    for ( ; pos > 0; pos -= (pos&(-pos))) out += bit[pos];
    return out;
}
int find_med(int n, int k){
    int target = (k + 1)/2;
    int l = 0, r = n;
    while (l <= r){
        int m = (l + r)/2;
        int one = get(m), two = get(m-1);
        // cout << m << " " << one << " " << two << endl;
        if (one >= target && two < target){
            return getval[m];
        }else{
            if (one < target) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp;
    set <int> st;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        inp.push_back(x); st.insert(x);
    }
    int rank = 0;
    map <int, int> mp;
    for (auto &it:st){
        mp[it] = ++rank; getval[rank] = it;
    }
    for (int i = 0; i < k; i++){
        update(maxarray, mp[inp[i]], 1);
    }
    int med = find_med(n, k);
    int64_t calc = 0;
    for (int i = 0; i < k; i++) calc += abs(inp[i] - med);
    cout << calc << " "; // << med << endl;
    int infront = med;
    for (int i = k; i < n; i++){
        update(maxarray, mp[inp[i]], 1);
        update(maxarray, mp[inp[i-k]], -1);
        med = find_med(n, k);
        calc -= abs(inp[i-k] - infront);
        calc += abs(inp[i] - infront);
        if (med > infront){
            int down = get(mp[med]-1);
            int up = k - get(mp[infront]);
            calc += down*(med - infront);
            calc -= up*(med - infront);
        }
        if (med < infront){
            int down = get(mp[infront]-1);
            int up = k - get(mp[med]);
            calc -= down*(infront - med);
            calc += up*(infront - med);
        }
        cout << calc << " "; // << med << endl;
        infront = med;
    }
    return 0;
}