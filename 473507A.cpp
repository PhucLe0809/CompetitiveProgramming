#include <bits/stdc++.h>
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int s, t, m, n; cin >> s >> t >> m >> n;
    vector <int> start(t), thend(t);
    for (int i = 0; i < t; i++) cin >> start[i];
    for (int i = 0; i < t; i++) cin >> thend[i];
    start.push_back(inf);
    thend.push_back(inf+1);
    vector <int> left(m);
    for (int i = 0; i < m; i++) cin >> left[i];
    vector <int> right(n);
    for (int i = 0; i < n; i++) cin >> right[i];
    bool check = false;
    for (int i = 0; i < m && !check; i++){
        for (int j = 0; j < n && !check; j++){
            int temp = abs(left[i] - right[j]);
            if (temp >= s) continue;
            int extend = s - temp;
            int pivot = temp + extend/2;
            double res = extend*1.0/2 - extend/2;
            if (left[i] > right[j]){
                pivot = s - pivot;
                res *= (-1);
            }
            int it = lower_bound(start.begin(), start.end(), pivot) - start.begin();
            if (start[it] == pivot){
                check = (pivot*1.0+res > (double)start[it]);
            }else{
                if (it == 0) continue;
                check = (pivot*1.0+res < (double)thend[it-1]);
            }
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}