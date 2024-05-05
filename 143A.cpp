#include <bits/stdc++.h>

using namespace std;
int r1, r2, c1, c2, d1, d2;
bool ok = false;
int out[5];

bool Check(){
    set <int> st;
    for (int i = 1; i < 5; i++) st.insert(out[i]);
    if (out[1]+out[2]==r1 && out[3]+out[4]==r2
    && out[1]+out[3]==c1 && out[2]+out[4]==c2 
    && out[1]+out[4]==d1 && out[2]+out[3]==d2
    && st.size()==4){
        return true;
    }else return false;
}

void Try(int n, int k){
    if (ok) return;
    for (int i = 1; i <= 9 && !ok; i++){
        out[k] = i;
        if (k==n) ok = Check();
        else Try(n, k+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    Try(4, 1);
    if (!ok) cout << -1;
    else cout << out[1] << " " << out[2] << '\n' << out[3] << " " << out[4];
    return 0;
}