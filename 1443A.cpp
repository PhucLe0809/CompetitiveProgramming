#include <bits/stdc++.h>
#define maxarray 405

using namespace std; 
bool tick[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 4*n; i > 2*n; i -= 2) cout << i << " ";
        cout << '\n';
    }
    return 0;
}