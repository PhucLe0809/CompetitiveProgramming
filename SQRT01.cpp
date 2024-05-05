#include <bits/stdc++.h>
#define maxarray 100005
#define block 320

using namespace std;
vector <int> inp(maxarray);
vector <map<int, int>> cnt(maxarray/block + 2);

void process(int l, int r){
    for (int i = l; i < r; i++){
        cnt[i/block][inp[i]]++;
    }
}
void update(int pos, int val){
    cnt[pos/block][inp[pos]]--;
    inp[pos] = val;
    cnt[pos/block][inp[pos]]++;
}
int get(int l, int r, int k){
    int left = (l + block - 1) / block;
    int right = r / block;
    if (left >= right){
        return count(inp.begin() + l, inp.begin() + r+1, k);
    }
    int sum = 0;
    for (int i = left; i <= right; i++) sum += cnt[i][k];
    for (int i = l; i < left*block; i++) sum += (inp[i] == k);
    for (int i = right*block; i <= r; i++) sum += (inp[i] == k);
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> inp[i];
    process(0, n);
    int t, x, y, k;
    while (q--){
        cin >> t >> x >> y;
        if (t == 1) update(x, y);
        if (t == 2){
            cin >> k;
            cout << get(x, y, k) << '\n';
        }
    }
    return 0;
}