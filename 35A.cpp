#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);
    ifstream finp ("input.txt");
    ofstream fout ("output.txt");
    int n; finp >> n;
    vector <int> inp(4); inp[n] = 1;
    int x, y;
    for (int i = 0; i < 3; i++){
        finp >> x >> y;
        swap(inp[x], inp[y]);
    }
    for (int i = 1; i < 4; i++){
        if (inp[i]){
            fout << i; break;
        }
    }
    finp.close(); fout.close();
    return 0;
}