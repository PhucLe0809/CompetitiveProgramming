#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t one, two, x;
    one = two = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x==1) one++;
        else two++;
    }
    cout << min(one, two)+(one-min(one, two))/3;
    return 0;
}