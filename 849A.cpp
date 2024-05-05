#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> odd, inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i];
        if (inp[i]%2!=0) odd.push_back(i);
    }
    if (inp[0]%2==0 || inp[n-1]%2==0) cout << "No\n";
    else{
        if (n%2!=0) cout << "Yes\n";
        else{
            if (odd.size()<6){
                cout << "No"; return 0;
            }
            bool check = false;
            for (int j = 1; j<=odd.size()-5 && !check; j++){
                for (int k = j+2; k<=odd.size()-3 && !check; k++){
                    if ((odd[j]-odd[0]+1)%2!=0 && odd[j+1]==odd[j]+1
                    && (odd[k]-odd[j+1]+1)%2!=0 && odd[k+1]==odd[k]+1
                    && (odd.back()-odd[k+1]+1)%2!=0){
                        check = true;
                        // cout << odd[0] << " " << odd[j] << " ";
                        // cout << odd[j+1] << " " << odd[k] << " ";
                        // cout << odd[k+1] << " " << odd.back() << endl;
                    }
                }
            }
            if (check) cout << "Yes"; else cout << "No";
        }
    }
    return 0;
}