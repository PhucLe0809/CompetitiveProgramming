#include <bits/stdc++.h>
#define maxarray 500005
#define douarray 1000005

using namespace std;
int inp[douarray], thend[maxarray];
int upto[douarray], downto[douarray], bit[maxarray];
pair <int, int> mp[maxarray];
vector <pair<pair<int, int>, int>> scan;

void update(int &n, int pos, int value){
    while (pos <= n){
        bit[pos] += value;
        pos += (pos&(-pos));
    }
}
int get(int pos){
    int out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}
bool comp(pair<pair<int,int>, int> &a, pair<pair<int,int>, int> &b) {
    return a.first.first < b.first.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    fill(mp, mp + n+1, pair<int, int>(-1, -1));
    for (int i = 0; i < 2*n; i++){
        cin >> inp[i];
        if (mp[inp[i]].first == -1) mp[inp[i]].first = i;
        else mp[inp[i]].second = i;
    }
    for (int it = 1; it <= n; it++){
        scan.push_back({{mp[it].first, mp[it].second}, it});
    }
    for (int i = 0; i < 2*n; i++){
        if (i == 0) upto[i] = 0;
        else{
            upto[i] = upto[i-1] + (mp[inp[i]].second == i);
        }
    }
    sort(scan.begin(), scan.end(), comp);
    update(n, upto[scan[n-1].first.second], 1);
    int64_t inside = 0;
    for (int i = n-2; i >= 0; i--){
        inside += get(upto[scan[i].first.second])*1LL;
        update(n, upto[scan[i].first.second], 1);
    }
    for (int i = 2*n-1; i >= 0; i--){
        if (i == 2*n-1) downto[i] = 0;
        else{
            downto[i] = downto[i+1] + (mp[inp[i]].first == i);
        }
    }
    int64_t outside = 0;
    for (int it = 1; it <= n; it++){
        outside += downto[min(mp[it].second+1, 2*n-1)]*1LL;
    }
    int64_t total = n;
    total = total + total*(total-1)/2 - inside - outside;
    cout << total << '\n';
    // cout << inside << " " << outside << '\n';
    return 0;
}