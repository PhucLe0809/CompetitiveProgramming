#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, c0, c1, h;
    string str;
    int32_t answer, zero, one;
    while (test--){
        cin >> n >> c0 >> c1 >> h;
        cin >> str;
        zero = one = 0;
        for (int i = 0; i < n; i++){
            if (str[i]=='0') zero++;
            else one++;
        }
        answer = zero*c0+one*c1;
        for (int i = 1; i <= one; i++){
            //cout << answer << " ";
            answer = min(answer, (zero+i)*c0+(one-i)*c1+i*h);
        }
        for (int i = 1; i <= zero; i++){
            answer = min(answer, (zero-i)*c0+(one+i)*c1+i*h);
        }
        cout << answer << '\n';
    }
    return 0;
}