#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int num; cin >> num;
        int x = num;
        int n = 0;
        while (num){
            n = n*10 + num % 10;
            num /= 10;
        }
        if (n == x) cout << x << " ";
    }
}
