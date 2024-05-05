#include <bits/stdc++.h>

using namespace std;

void calc(int x, int y, int &a, int &b){
	if (x==y){
		a++; b++; return;
	}
	if ((x==1 && y==2) || (x==2 && y==3) || (y==1 && x==3)){
		b += 3; return;
	}
	if ((x==1 && y==3) || (y==1 && x==2) || (y==2 && x==3)){
		a += 3; return;
	}
}

int main(){
	int x, y, z, t, u, v;
	cin >> x >> y >> z >> t >> u >> v;
	int a, b, c;
	a = b = c = 0;
	calc(x, y, a, b);
	calc(z, t, a, c);
	calc(u, v, b, c);
	cout << a << " " << b << " " << c;
	return 0;
}
