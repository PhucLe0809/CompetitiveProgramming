#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, answer;
    while (test--){
        cin >> n >> k;
        vector <int> inp(k);
        for (int i = 0; i < k; i++) cin >> inp[i];
        answer = max(inp[0], n-inp[k-1]+1);
        for (int i = 1; i < k; i++){
            answer = max(answer, int(ceil((inp[i]-inp[i-1]+1)*1.0/2)));
        }
        cout << answer << '\n';
    }
    return 0;
}