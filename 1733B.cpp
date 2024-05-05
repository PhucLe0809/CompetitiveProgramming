#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, x, y, minn, maxx, temp, z, sum, i;
    while (test--){
		cin >> n >> x >> y;
		minn = min(x, y);
		maxx = max(x, y);
		if (minn*n > n-1 || maxx*n < n-1)
		{
			cout << -1 << '\n';
			continue;
		}
		sum = n-1;
		z = sum % maxx;
		if((z!=0 && minn==0) || (minn!=0 && z%minn!=0) )
		{
			cout << -1 << '\n';
			continue;
		}
		else
		{
			temp = sum/maxx;
			i = 2 - maxx;
			for(int k = 1; k <= temp; k++)
			{
				i += maxx;
					for (int j = 1; j <= maxx; j++)
						cout << i << ' ';
			}
			for (int64_t i = temp*maxx + 1; i <= sum; i++)
				cout << i << ' ';
			cout << '\n';
		}
    }
    return 0;
}