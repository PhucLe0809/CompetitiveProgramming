#include <bits/stdc++.h>
#define maxarray 300005

using namespace std;
int32_t arr[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, z; 
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> arr[i];
        m = 0; z = -1;
		for (int i = 0; i < n; i++)
        {
			if(arr[i] >= m)
            {
				m = arr[i];
				if (i-1 >= 0 && arr[i-1] < arr[i] || i+1 < n && arr[i+1] < arr[i])
                    z = i+1;
			}
		}
        cout << z << '\n';
    }
    return 0;
}