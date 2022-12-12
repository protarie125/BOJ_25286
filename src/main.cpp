#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto& ds = vector<int>{
		31,28,31,30,31,30,
		31,31,30,31,30,31 };

	int t;
	cin >> t;
	while (0 < (t--)) {
		int y, m;
		cin >> y >> m;

		if (2 == m || 3 < m) {
			cout << y << ' ' << m - 1 << ' ' << ds[m - 2];
		}
		else if (3 == m) {
			if (0 == y % 400) {
				cout << y << " 2 29";
			}
			else if (0 == y % 4) {
				if (0 != y % 100) {
					cout << y << " 2 29";
				}
				else {
					cout << y << " 2 28";
				}
			}
			else {
				cout << y << " 2 28";
			}
		}
		else if (1 == m) {
			cout << y - 1 << " 12 31";
		}

		cout << '\n';
	}

	return 0;
}