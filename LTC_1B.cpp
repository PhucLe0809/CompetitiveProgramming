#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct vector2d {
    int x;
    int y;
};

int calc(vector2d v1, vector2d v2) {
    return v1.x * v2.y - v2.x * v1.y;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    vector2d v1, v2;
    // vector AB
    v1.x = x2 - x1;
    v1.y = y2 - y1;
    // vector AC
    v2.x = x3 - x1;
    v2.y = y3 - y1;
    int result = calc(v1, v2);
    int ON_THE_LINE = 0, LEFT = -1, RIGHT = 1;
    if (result == 0) cout << ON_THE_LINE;
    else{
        if (result > 0) cout << LEFT;
        else cout << RIGHT;
    }
    return 0;
}