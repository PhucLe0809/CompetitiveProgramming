#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector <int> scan;
    int k = 1;
    while ((pow(2, k)-1)*pow(2, k-1) < 1e6){
        scan.push_back((pow(2, k)-1)*pow(2, k-1));
        k++;
    }
    int n; cin >> n;
    k = scan.size()-1;
    while (n%scan[k]!=0) k--;
    cout << scan[k];
    return 0;
}