#include <bits/stdc++.h>
#define maxarray 100005
//limit for array size in Visual Studio Code doesn't hit level 10^6 elements
//If you want, please up to 10^6 when you submit code!

using namespace std; 
int64_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int64_t sumleft, sumright;
    int64_t dis, l, r;
    int32_t i, j;
    i = l = 1;
    j = r = n;
    sumleft = inp[1]; sumright = inp[n];
    dis = 1e18;
    while (i < j){
        if (abs(sumleft-sumright) < dis){
            dis = abs(sumleft-sumright);
            l = i; r = j;
        }
        if (sumleft == sumright){ 
            i++; j--; 
            sumleft += inp[i]; sumright += inp[j];
        }else{
            if (sumleft > sumright){
                j--; sumright += inp[j];
            }else{
                if (sumleft < sumright){
                    i++; sumleft += inp[i];
                }
            }
        }
    }
    cout << dis << '\n';
    cout << l << " " << r << '\n';
    return 0;
}