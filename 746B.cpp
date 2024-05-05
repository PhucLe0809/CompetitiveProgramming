#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    vector <char> out(n+1);
    if (n%2!=0){
        out[n/2] = str[0];
        for (int i = 1; i < n; i += 2){
            out[n/2-(i+1)/2] = str[i];
            out[n/2+(i+1)/2] = str[i+1];
        }
    }else{
        out[n/2-1] = str[0]; out[n/2] = str[1];
        for (int i = 2; i < n; i += 2){
            out[n/2-1-(i+1)/2] = str[i];
            out[n/2+(i+1)/2] = str[i+1];
        }
    }
    for (int i = 0; i < n; i++) cout << out[i];
    return 0;
}