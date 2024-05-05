#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t a[maxarray], b[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++)
            if (a[i] > b[i]) swap(a[i], b[i]);
        cout << int32_t((*max_element(a, a+n))*(*max_element(b, b+n))) << '\n';
    }
    return 0;
}