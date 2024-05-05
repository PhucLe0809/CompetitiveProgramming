#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005], infront[1005], scan[1005];
vector <int32_t> out;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    scan[1]=1; infront[1]=1;
    int32_t len, address;
    len = address = 1;
    for (int i = 2; i <= n; i++){
        scan[i] = 1;
        for (int j = 1; j < i; j++){
            if (inp[j]<inp[i] && scan[j]+1>scan[i]){
                scan[i]=scan[j]+1;
                infront[i]=j;
            }
        }
        if (len < scan[i]){
            len = scan[i]; address = i;
        }
    }
    cout << len << '\n';
    // while (len--){
    //     out.push_back(inp[address]);
    //     address = infront[address];
    // }
    // reverse(out.begin(), out.end());
    // for (auto x:out) cout << x << " ";
    return 0;
}