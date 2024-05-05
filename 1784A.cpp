#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i];
        }
        sort(inp.begin(), inp.end());
        int pivot = 0; 
        for (int i = 1; i < inp.size(); i++){
            if (inp[i]-inp[i-1]<=1) pivot = i;
            else break;
        }
        // for (auto &it:inp) cout << it << " "; cout << endl;
        int64_t tmp, answer;
        if (inp[0]==1) answer = 0; else{ answer = inp[0]-1; inp[0] = 1; pivot = 0; }
        for (int i = pivot+1; i < inp.size(); i++){
            tmp = 1LL*max(inp[i]-(inp[i-1]+1), 0);
            answer += tmp; 
            if (tmp!=0) inp[i] = inp[i-1]+1;
        }
        // cout << endl; for (auto &it:inp) cout << it << " "; cout << endl;
        cout << answer << '\n';
    }
    return 0;
}