#include <bits/stdc++.h>

using namespace std;
int pivot[] = {13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

bool check(int64_t a, int64_t b){
    string str = to_string(a);
    string ansi = to_string(b);
    int i = 0, j = 0;
    while (i < 9){
        if (str[i] == ansi[j]) j++;
        i++;
    }
    if (j >= 2) return true; else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n; cin >> n;
        int i;
        for (i = 0; i < 20; i++){
            if (check(n, pivot[i])){
                cout << pivot[i] << '\n';
                break;
            }
        }
        if (i >= 20) cout << "-1\n";
    }
    return 0;
}