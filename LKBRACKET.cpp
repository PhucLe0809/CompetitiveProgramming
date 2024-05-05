#include <bits/stdc++.h>
#define maxarray 25

using namespace std; 
int32_t n;
int32_t out[maxarray];

bool depth(){
    int32_t cnt = 0;
    for (int i = 1; i <= n; i++){
        if (out[i]) cnt++; else cnt--;
        if (cnt<0) return false;
    }
    if (cnt==0) return true;
    else return false;
}
void output(){
    for (int i = 1; i <= n; i++){
        if (out[i]) cout << "(";
        else cout << ")";
    }
    cout << '\n';
}
void bracket(int32_t n, int32_t k){
    if (k==n){
        if (depth()) output();
    }else{
        for (int i = 1; i >= 0; i--){
            out[k] = i;
            bracket(n, k+1);
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n; n *= 2;
    bracket(n, 1);
    return 0;
}