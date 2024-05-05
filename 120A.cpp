#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ifstream finp ("input.txt");
    ofstream fout ("output.txt");
    string str; finp >> str;
    int a; finp >> a;
    (str[1]+a&1)?(fout << "L"):(fout << "R");
    finp.close(); fout.close();
    return 0;
}