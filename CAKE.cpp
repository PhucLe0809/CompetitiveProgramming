#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t k, a, b, v;
    cin >> k >> a >> b >> v;
    int32_t box = ceil(a*1.0/(k*v));
    int32_t x = box*(k-1);
    if (x <= b) cout << box;
    else
    {
        box = b/(k-1);
        int32_t res = a - box*k*v;
        if (res <= 0) cout << box;
        else
        {
            b -= box*(k-1); box++;
            res -= (b+1)*v;
            if (res <= 0) cout << box;
            else
            {
                box += ceil(res*1.0/v);
                cout << box;
            }
        }
    }
    return 0;
}