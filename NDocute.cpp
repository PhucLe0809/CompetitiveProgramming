#include <bits/stdc++.h>

using namespace std;

int64_t get(int64_t r) {
	return (r + 1) * r / 2;
}

int64_t sumto(int64_t r, int need) {
	int64_t pw = 1;
	int64_t sum = 0;
	int64_t add = 0;
	for (int len = 1; ; ++len) {
		if (pw * 10 - 1 < r) {
			int64_t cnt = pw * 10 - pw;
			if (need) {
				sum += add * cnt + get(cnt) * len;
				add += cnt * len;
			} else {
				sum += cnt * len;
			}
		} else {
			int64_t cnt = r - pw + 1;
			if (need) {
				sum += add * cnt + get(cnt) * len;
			} else {
				sum += cnt * len;
			}
			break;
		}
		pw *= 10;
	}
	return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		int64_t k;
		cin >> k;
		k--;
		int64_t l = 1, r = 1e9;
		int64_t res = -1;
		while (r - l >= 0) {
			int64_t mid = (l + r) >> 1;
			if (sumto(mid, 1) > k) {
				res = mid;
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}
		k -= sumto(res - 1, 1);
		
		l = 1, r = res;
		int64_t num = -1;
		while (r - l >= 0) {
			int mid = (l + r) >> 1;
			if (sumto(mid, 0) > k) {
				num = mid;
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}
		
		cout << to_string(num)[k - sumto(num - 1, 0)] << endl;
	}
	return 0;
}