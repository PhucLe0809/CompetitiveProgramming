#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, answer;
    bool check;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> inp[i];
        answer = 0; check = false;
        while (!check){
            check = true;
            for (int i = 1; i<=n && check; i++){
                if (inp[i]!=i) check = false;
            }
            if (check) continue;
            answer++;
            for (int i = 2-(answer%2); i <= n-(2-(answer%2==0)); i+=2){
                if (inp[i]>inp[i+1]) swap(inp[i], inp[i+1]);
            }
        }
        cout << answer << '\n';
    }
    return 0;
}