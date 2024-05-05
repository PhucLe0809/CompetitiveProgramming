#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m;
    while (test--){
        cin >> n >> m;
        vector <int> inp(n*m);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> inp[m*i+j];
            }
        }
        sort(inp.begin(), inp.end());
        for (int i = 0; i < n*m-1; ){
            if ((inp[i]<0 && inp[i+1]<0)
            || (inp[i]<0 && inp[i+1]>=0 && -inp[i]>inp[i+1])){
                inp[i] *= -1; inp[i+1] *= -1; i++;
            }else{
                if (inp[i]>0 && inp[i+1]>0) break;
            }
            i++;
        }
        cout << accumulate(inp.begin(), inp.end(), 0) << '\n';
    }
    return 0;
}