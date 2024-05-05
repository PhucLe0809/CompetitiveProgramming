#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    int32_t run;
    while (test--){
        cin >> n >> str;
        run = 0;
        for (auto x : str){
            if (x=='Q'){
                if (run<=0) run = 1;
                else run++;
            } else run--;
        }
        if (run<=0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}