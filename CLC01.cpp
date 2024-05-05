#include <bits/stdc++.h>

using namespace std;

int main(){
	int h, m, s;
	cin >> h >> m >> s;
	if (0<=h && h<24 && 0<=m && m<60 && 0<=s && s<60){}
	else{
		cout << 0; return 0;
	}
	int scan = h*3600 + m*60 + s;
	scan -= 1;
	if (scan<0) scan += 24*60*60;
	h = scan/3600; scan -= h*3600;
	m = scan/60; scan -= m*60;
	s = scan;
	cout << h << " " << m << " " << s;
	return 0;
}
