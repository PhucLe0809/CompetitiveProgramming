#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    int64_t answer = w1+w2+h1+h2+2;
    answer += (h1+h2+2);
    answer += (w1-w2);
    cout << answer;
    return 0;
}