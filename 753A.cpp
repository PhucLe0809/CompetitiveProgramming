#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp;
    int calc = 0; int i = 1;
    while (calc+i <= n){
        calc += i; inp.push_back(i);
        i++;
    }
    cout << inp.size() << '\n';
    for (int i = 0; i < inp.size()-1; i++) cout << inp[i] << " ";
    cout << n-(calc-inp.back());
    return 0;
}