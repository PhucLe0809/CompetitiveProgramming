#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 200005
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> inp(1, 0);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        inp.push_back(x);
    }
    deque <int> que;
    int answer = 0;
    while (m--){
        int x; cin >> x;
        bool check = true;
        for (int i = 0; i < que.size() && check; i++){
            if (que[i] == x) check = false;
        }
        int calc = 0;
        if (check){
            for (int i = 0; i < que.size(); i++){
                calc += inp[que[i]];
            }
        }else{
            int i = que.size()-1;
            while (que[i] != x){
                calc += inp[que[i]];
                i--;
            }
            que.erase(que.begin() + i);
        }
        answer += calc;
        que.push_back(x);
        // cout << answer << endl;
        // for (auto &it:que) cout << it << " "; cout << endl;
    }
    cout << answer;
    return 0;
}