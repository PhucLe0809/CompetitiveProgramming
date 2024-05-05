#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n; 
    int32_t sum = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; sum += inp[i];
    }
    int32_t maxx = *max_element(inp, inp+n);
    int32_t dis = 0;
    for (int i = 0; i < n; i++){
        dis += maxx-inp[i];
    }
    if (dis>sum) cout << maxx;
    else{
        sum = (sum+1)-dis;
        cout << maxx+(sum/n)+(sum%n!=0);
    }
    return 0;
}