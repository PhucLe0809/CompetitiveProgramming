#include <bits/stdc++.h>

using namespace std; 
bool one[105], zero[105], rone[105], rzero[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, q;
    string str; bool check;
    int32_t l, r;
    while (test--){
        cin >> n >> q >> str;
        one[0] = zero[0] = false;
        if (str[0]=='1') one[0]=true;
        else zero[0]=true;
        for (int i = 1; i < n; i++){
            if (str[i]=='1') one[i]=true;
            else one[i]=one[i-1];
            if (str[i]=='0') zero[i]=true;
            else zero[i]=zero[i-1];
        }
        rone[n-1] = rzero[n-1] = false;
        if (str[n-1]=='1') rone[n-1]=true;
        else rzero[n-1]=true;
        for (int i = n-2; i > -1; i--){
            if (str[i]=='1') rone[i]=true;
            else rone[i]=rone[i+1];
            if (str[i]=='0') rzero[i]=true;
            else rzero[i]=rzero[i+1];
        }
        while (q--){
            cin >> l >> r; check = false;
            if (str[l-1]=='1'){
                if (l>1 && one[l-2]) check = true;
                else check = false;
            }else{
                if (l>1 && zero[l-2]) check = true;
                else check = false;
            }
            if (!check){
                if (str[r-1]=='1'){
                    if (r<n && rone[r]) check = true;
                    else check = false;
                }else{
                    if (r<n && rzero[r]) check = true;
                    else check = false;
                }
            }
            if (check) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}