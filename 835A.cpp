#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int32_t one = s*v1 + 2*t1;
    int32_t two = s*v2 + 2*t2;
    if (one < two) cout << "First\n";
    else if (one > two) cout << "Second\n";
        else cout << "Friendship\n";
    return 0;
}