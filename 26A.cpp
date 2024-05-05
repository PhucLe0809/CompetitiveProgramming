#include <bits/stdc++.h>
#define maxarray 3005

using namespace std; 
vector <int32_t> scan(maxarray, 0);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 2; i <= n/2; i++){
        if (scan[i]==0){
            for (int j = 2*i; j <= n; j += i){
                scan[j]++;
            }
        }
    }
    int32_t cnt = 0;
    for (int i = 0; i <= n; i++){
        if (scan[i]==2) cnt++;
    }
    cout << cnt;
    return 0;
}