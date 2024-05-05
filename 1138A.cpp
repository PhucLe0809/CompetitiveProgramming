#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp, scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    if (inp[n-1]==2) inp.push_back(1);
    else inp.push_back(2);
    int32_t answer = 0;
    int32_t one, two, i;
    int32_t a, b;
    if (inp[0]==1){a=1; b=2; }
    else {a=2; b=1;}
    i = 0;
    while (i<=n){
        one = two = 0;
        while (inp[i]==a){one++; i++; };
        while (inp[i]==b){two++; i++; };
        scan.push_back(one); scan.push_back(two);
    }
    for (int i = 1; i < scan.size(); i++){
        // cout << scan[i] << " ";
        answer = max(answer, 2*min(scan[i], scan[i-1]));
    }
    cout << answer;
    return 0;
}