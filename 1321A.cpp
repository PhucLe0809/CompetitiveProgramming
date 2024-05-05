#include <bits/stdc++.h>
#define maxarray 105

using namespace std; 
int r[maxarray], b[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> r[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int x, y; x = y = 0;
    for (int i = 0; i < n; i++){
        if (r[i]==1 && b[i]==0) x++;
        if (r[i]==0 && b[i]==1) y++;
    }
    if (x==0 || (x==y && y==0)) cout << -1;
    else cout << ceil((y*1+1)*1.0/x);
    return 0;
}