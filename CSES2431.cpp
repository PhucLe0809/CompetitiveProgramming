#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t scan[20], powten[20];
    int64_t calc, temp; 
    calc = 0; temp = 1; 
    scan[0] = 0;
    for (int64_t i = 1; i <= 17; i++){
        calc += 9*(i)*(temp);
        temp *= 10;
        scan[i] = calc;
    }
    powten[0] = 1;
    for (int i = 1; i <= 18; i++){
        powten[i] = powten[i-1]*10;
    }
    int q; cin >> q;
    while (q--){
        int64_t k; cin >> k;
        int pivot = 0;
        for (int i = 17; i >= 0; i--){
            if (k > scan[i]){
                pivot = i; break;
            }
        }
        k -= scan[pivot];
        int64_t inter = k / (pivot+1);
        int pos = k % (pivot+1);
        string str = to_string(powten[pivot]-1 + inter + (pos!=0));
        if (pos == 0) cout << str[pivot] << '\n';
        else cout << str[pos-1] << '\n';
    }
    return 0;
}