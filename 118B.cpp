#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int arr[20][20];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++) arr[i][j] = j;
        arr[i][i] = i;
        for (int j = i+1; j < 2*i+1; j++) arr[i][j] = i-(j-i);
    }
    for (int j = 0; j < n; j++) arr[n][j] = j;
    arr[n][n] = n;
    for (int j = n+1; j < 2*n+1; j++) arr[n][j] = n-(j-n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++) arr[n+i+1][j] = j;
        arr[n+i+1][n-i-1] = n-i-1;
        for (int j = n-i; j < 2*(n-i+1)+1; j++) arr[n+i+1][j] = 2*(n-i-1)-j;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++) cout << "  ";
        for (int j = 0; j < 2*i; j++) cout << arr[i][j] << " ";
        cout << arr[i][2*i] << '\n';
    }
    for (int j = 0; j < 2*n; j++) cout << arr[n][j] << " "; cout << arr[n][2*n] << '\n';
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++) cout << "  ";
        for (int j = 0; j < 2*(n-i-1); j++) cout << arr[n+i+1][j] << " ";
        cout << arr[n+i+1][2*(n-i-1)] << '\n';
    }
    //0
    //0 1 0
    //0 1 2 1 0
    //0 1 2 3 2 1 0
    //0 1 2 3 4 3 2 2 1 0
    //0 1 2 3 2 1 0
    //0 1 2 1 0
    //0 1 0
    //0
    return 0;
}