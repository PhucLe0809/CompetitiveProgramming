#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int cs[maxarray], ck[maxarray];
int bit[2*maxarray];
vector <pair<int64_t, int>> scan;

void update(int n, int pos, int value){
    while (pos <= n){
        bit[pos] += value;
        pos += (pos&(-pos));
    }
}
int get(int pos){
    int out = 0;
    while (pos >= 1){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int64_t k; cin >> k;
    vector <int64_t> inp(n+1), sum(n+1);
    sum[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i]; 
        sum[i] = sum[i-1] + inp[i];
    }
    fill(bit, bit + 2*maxarray, 0);
    scan.resize(2*n+2);
    for (int i = 0; i <= n; i++){
        scan[i].first = sum[i];
        scan[i].second = i;
        scan[n+i+1].first = sum[i] + k;
        scan[n+i+1].second = n+i+1;
    }
    sort(scan.begin(), scan.end());
    int i = 0, rank = 0;
    while (i < 2*n+2){
        rank++;
        int j = i;
        while (scan[i].first == scan[j].first && j < 2*n+2){
            if (scan[j].second <= n) cs[scan[j].second] = rank;
            else ck[scan[j].second-(n+1)] = rank;
            j++;
        }
        i = j;
    }
    int64_t answer = 0;
    for (int i = n; i >= 0; i--){
        answer += (get(2*n+3) - get(ck[i]-1));
        update(2*n+5, cs[i], 1);
    }
    cout << answer;
    return 0;
}