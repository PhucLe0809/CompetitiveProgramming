#include <iostream>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    long long n; cin >> n;
    if (n % 2 != 0) cout << 2;
    else{
        if ((n/2) % 2 == 0) cout << 0;
        else cout << 1;
    }
    return 0;
}