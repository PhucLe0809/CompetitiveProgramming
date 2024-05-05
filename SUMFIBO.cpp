#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int fibo[maxarray];
int sumfibo[maxarray];

int main(){
	int q; cin >> q;
    fibo[0] = 0; fibo[1] = 1;
    int m = 1e9+7;
    for (int i = 2; i < maxarray; i++){
        fibo[i] = (fibo[i-1]%m + fibo[i-2]%m)%m;
    }
    sumfibo[0] = 0; sumfibo[1] = 1;
    for (int i = 2; i < maxarray; i++){
        sumfibo[i] = (sumfibo[i-1]%m + fibo[i]%m)%m;
    }
    int n;
    while (q--){
        cin >> n;
        cout << sumfibo[n] << " ";
    }
	return 0;
}
