#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int x, y, t = 0;
    int a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    int dx[8] = {-a, -a, -b, -b, a, a, b, b};
    int dy[8] = {b, -b, a, -a, b, -b, a, -a};
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (kx + dx[i] == qx + dx[j] && ky + dy[i] == qy + dy[j]){
                t++;
            }
        }
    }
    if (a == b) t /= 4;
    cout << t << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        GOTOHANOI();
    }
    return 0;
}