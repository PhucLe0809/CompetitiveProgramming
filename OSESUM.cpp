#include <iostream>

using namespace std;

int main(){
    long long n; cin >> n;
    if (n % 2 != 0) cout << 2;
    else{
        if ((n/2) % 2 == 0) cout << 0;
        else cout << 1;
    }
}