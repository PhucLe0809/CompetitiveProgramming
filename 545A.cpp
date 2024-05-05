#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a, b, c;
    int x;
    vector <int> car;
    for (int i = 0; i < n; i++){
        a = b = c = 0;
        for (int j = 0; j < n; j++){
            cin >> x;
            switch (x){
                case 1: a++; break;
                case 2: b++; break;
                case 3: c++; break;
            }
        }
        if (a==0 && c==0) car.push_back(i+1);
    }
    cout << car.size() << endl;
    for (auto x:car) cout << x << " ";
    return 0;
}