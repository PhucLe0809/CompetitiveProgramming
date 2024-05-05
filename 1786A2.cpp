#include <bits/stdc++.h>
#define limit 1000005

using namespace std; 
int32_t tick[limit];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b, c, d, dis, sum;
    for (int i = 1; i <= limit; i++){
        if (i%2!=0) tick[i]=1;
        else tick[i]=0;
    }
    while (test--){
        cin >> n;
        sum = 0;
        a = b = c = d = 0;
        for (int i = 1; sum < n; i++){
            if ((i%2!=0 && ((i+1)/2)%2!=0) || (i%2==0 && (i/2)%2==0)){
                dis = min(n-sum, i);
                for (int j = sum+1; j <= sum+dis; j++){
                    if (tick[j]) a++; else b++;
                }
            }
            else{
                dis = min(n-sum, i);
                for (int j = sum+1; j <= sum+dis; j++){
                    if (tick[j]) c++; else d++;
                }
            }
            sum += i;
        }
        cout << a << " " << b << " " << c << " " << d << '\n';
    }
    return 0;
}