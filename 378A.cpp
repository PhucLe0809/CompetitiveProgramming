#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b; cin >> a >> b;
    int32_t win, same, fail; 
    win = same = fail = 0;
    for (int i = 1; i <= 6; i++){
        if (abs(a-i)==abs(b-i)) same++;
        else if (abs(a-i)<abs(b-i)) win++;
            else fail++;
    }
    cout << win << " " << same << " " << fail << '\n';
    return 0;
}