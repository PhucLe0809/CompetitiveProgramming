#include <bits/stdc++.h>
#define maxarray 55

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, left, right, cnt;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        left = 0;
        while (inp[left] == 0) left++;
        right = n-1;
        while (inp[right] == 0) right--;
        cnt = 0;
        for (int i = left; i <= right; i++)
            if (inp[i] == 1) cnt++;
        cout << right-left+1 - cnt << '\n';
    }
    return 0;
}