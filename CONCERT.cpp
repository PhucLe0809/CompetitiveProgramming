#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int sum = 0;
    deque <int> que;
    for (int i = 0; i < n; i++){
        while (que.size() && inp[que.back()] < inp[i]){
            que.pop_back(); sum++;
        }
        int j = 0;
        while(j + 1 < que.size() && inp[que[j]] > inp[i] && inp[que[j+1]] != inp[i]){
            j++;
        }
        sum += que.size() - j;
        que.push_back(i);
        // for (auto &it:que) cout << inp[it] << " "; cout << sum << endl; 
    }
    cout << sum;
    return 0;
}
