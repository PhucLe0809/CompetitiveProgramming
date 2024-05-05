#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, n, w; cin >> k >> n >> w;
	long long val = (w*(w+1)/2)*k;
	if (val - n <= 0)
		cout << 0;
	else cout << val - n;
	return 0;
}