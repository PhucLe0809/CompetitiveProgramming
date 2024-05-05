#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, answer;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp+1, inp+n);
        for (int i = 1; i < n; i++){
            if (inp[i]>inp[0]){
                inp[0] += (inp[i]-inp[0])/2+((inp[i]-inp[0])%2!=0);
            }
        }
        cout << inp[0] << '\n';
    }
    return 0;
}