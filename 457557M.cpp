#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 30005
#define inf 1000000007

using namespace std;
int a[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, t; cin >> n >> t;
    for (int i = 1; i < n; i++) cin >> a[i];
    int i = 1;
    while (i <= t){
        if (i + a[i] == t){
            cout << "YES";
            return 0;
        }
        else
            i += a[i];
    }
    cout << "NO";
    return 0;
}