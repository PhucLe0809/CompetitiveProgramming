#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, s, one, answer;
    while (test--){
        cin >> n >> s;
        if (n==1) cout << s << '\n';
        else {
            if (n%2==0) one = n/2;
            else one = n/2+1;
            answer = s/(n-one+1);
            cout << answer << '\n';
        }
    }
    return 0;
}