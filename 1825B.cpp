#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, answer;
    int a[10005];
    while (test--){
		cin >> n >> m;
		for (int i = 1; i <= n*m; i++) cin >> a[i];
		sort(a + 1, a + 1 + n*m);
		answer = 0;
		if (n > m) 
		{
			if (a[n*m] - a[1] + a[n*m - 1] - a[1] > 2 * a[n*m] - a[1] - a[2])
			{
				answer = 1ll * (m - 1) * (a[n*m - 1] - a[1]);
				answer+=1ll*(n*m-1-(m-1))* (a[n*m] - a[1]);
			}
			else
			{
				answer = 1ll * (m - 1) * (a[n*m] - a[2]);
				answer += 1ll * (n * m - 1 - (m - 1)) * (a[n*m] - a[1]);
			}
		}
		else
		{
			if (a[n * m] - a[1] + a[n * m - 1] - a[1] > 2 * a[n * m] - a[1] - a[2])
			{
				answer = 1ll * (n - 1) * (a[n*m-1] - a[1]);
				answer += 1ll * (n * m - 1 - (n - 1)) * (a[n * m] - a[1]);
			}
			else
			{
				answer = 1ll * (n - 1) * (a[n * m] - a[2]);
				answer += 1ll * (n * m - 1 - (n - 1)) * (a[n * m] - a[1]);
			}
		}
		cout << answer << '\n';
    }
    return 0;
}