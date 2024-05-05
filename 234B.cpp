#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);
    ifstream finp ("input.txt");
    ofstream fout ("output.txt");
    int n, k; finp >> n >> k;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        finp >> inp[i].first; inp[i].second = i+1;
    }
    sort(inp.begin(), inp.end());
    fout << inp[n-k].first << '\n';
    for (int i = n-1; i >= n-k; i--) fout << inp[i].second << " ";
    finp.close(); fout.close();
    return 0;
}