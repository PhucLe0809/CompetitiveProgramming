#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, r, b, val, rem;
    while (test--){
        cin >> n >> r >> b;
        string s = "";
        val = r/(b+1);
        rem = r%(b+1);
        for(int i = 0; i < b+1; i++){
            for(int j = 0; j < val; j++) s+='R';
            if(i==b) break;
            if(i < rem) s+='R';
            s+='B';
        }
        cout << s << '\n';
    }
    return 0;
}