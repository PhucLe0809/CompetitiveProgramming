#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, minn, maxx;
    int64_t a, b;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        minn = *min_element(inp, inp+n);
        a = 0;
        for (int i = 0; i < n; i++){
            if (inp[i]==minn) a++;
        }
        maxx = *max_element(inp, inp+n);
        b = 0;
        for (int i = 0; i < n; i++){
            if (inp[i]==maxx) b++;
        }
        if (minn!=maxx) cout << 2*a*b << '\n';
        else cout << a*(a-1) << '\n';
    }
    return 0;
}