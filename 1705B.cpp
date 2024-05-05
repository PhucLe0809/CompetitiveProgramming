#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int64_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, l;
    int64_t cnt;
    while (test--){
        cin >> n; l = -1;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            if (inp[i]>0 && l==-1) l = i;
        }
        cnt = 0;
        for (int i = l; i<n-1 && l!=-1; i++){
            cnt += (inp[i]+(inp[i]==0));
        }
        cout << cnt << '\n';
    }
    return 0;
}