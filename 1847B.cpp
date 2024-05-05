#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, answer, curr, target; 
    while (test--){
        cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        target = accumulate(inp.begin(), inp.end(), inp[0], bit_and<>());
        if (target!=0){
            cout << 1 << '\n'; continue;   
        }
        answer = 0;
        curr = INT_MAX;
        for (auto &it:inp){
            curr &= it;
            if (curr == 0){
                curr = INT_MAX;
                answer++;
            }
        }
        cout << answer << '\n'; 
    }
    return 0;
}