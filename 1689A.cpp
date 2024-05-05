#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, k, a, b, i, j;
    string str, ansi, out;
    while (test--){
        cin >> n >> m >> k;
        cin >> str >> ansi;
        sort(str.begin(), str.end());
        sort(ansi.begin(), ansi.end());
        out = ""; i = j = 0;
        a = b = 0;
        while (i<n && j<m){
            if ((str[i]<ansi[j] && a<k) || (b==k && a==0)){
                out += str[i]; b = 0;
                i++; a++; continue;
            }
            if ((str[i]>ansi[j] && b<k) || (a==k && b== 0)){
                out += ansi[j]; a = 0;
                j++; b++; continue;
            }
        }
        cout << out << '\n';
    }
    return 0;
}