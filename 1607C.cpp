#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x, answer; 
    while (test--){
        cin >> n;
        vector <int> inp;
        for (int i = 0; i < n; i++){
            cin >> x; inp.push_back(x);
        }
        sort(inp.begin(), inp.end());
        answer = inp[0];
        for (int i = 0; i < n-1; i++){
            answer = max(answer, inp[i+1]-inp[i]);
        }
        cout << answer << '\n';
    }
    return 0;
}