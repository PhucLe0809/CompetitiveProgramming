#include <bits/stdc++.h>

using namespace std;
int inp[1000005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp, inp + n); inp[n] = inp[n-1] + 1;
    int cnt = 1;
    for (int i = 1; i <=  n; i++){
        if (inp[i] == inp[i-1]) cnt++;
        else{
            if (cnt % 2 != 0){
                cout << inp[i-1]; return 0;
            }
            cnt = 1;
        }
    }
}
