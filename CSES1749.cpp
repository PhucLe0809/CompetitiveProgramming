#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int inp[maxarray], bit[maxarray];

void update(int n, int pos, int value){
    while (pos <= n){
        bit[pos] += value;
        pos += (pos&(-pos));
    }
}
int get(int n, int pos){
    int out = 0;
    while (pos >= 1){
        out += bit[pos]; 
        pos -= (pos&(-pos));
    }
    return out;
}
int query(int l, int r, int n, int value){
    int pos = 0;
    while (l <= r){
        int mid = l + r >> 1;
        if (get(n, mid) >= value){
            pos = mid; r = mid - 1;
        }else l = mid + 1;
    }
    return pos;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    fill(bit, bit + maxarray, 0);
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        update(n, i, 1);
    }
    int x;
    for (int i = 1; i <= n; i++){
        cin >> x;
        int pos = query(1, n, n, x);
        cout << inp[pos] << " ";
        update(n, pos, -1);
    }
    return 0;
}