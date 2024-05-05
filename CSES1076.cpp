#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int bit[maxarray];

void update(int n, int pos, int val){
    for ( ; pos <= n; pos += (pos&(-pos))) bit[pos] += val;
}
int get(int pos){
    int out = 0;
    for ( ; pos > 0; pos -= (pos&(-pos))) out += bit[pos];
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    set <int> st;
    for (auto &it:inp){
        cin >> it; st.insert(it);
    }
    int rank = 0;
    map <int, int> mp;
    vector <int> getval(n+1);
    for (auto &it:st){
        mp[it] = ++rank; getval[rank] = it;
    }
    for (int i = 0; i < n; i++){
        update(n, mp[inp[i]], 1);
        if (i < k-1) continue;
        if (i >= k) update(n, mp[inp[i-k]], -1);
        int target = (k + 1)/2;
        int l = 0, r = n, answer = -1;
        while (l <= r){
            int mid = (l + r)/2;
            int one = get(mid), two = get(mid-1);
            if (one >= target && two < target){
                answer = mid; break;
            }else{
                if (one < target) l = mid+1;
                else r = mid-1;
            }
        }
        cout << getval[answer] << " ";
    }    
    return 0;
}