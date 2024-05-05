#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, i; 
	for (cin >> a >> b; i++ < a; ) cout << i << " ";
	for (b += 2; --b; ) cout << a+b << " ";
    return 0;
}