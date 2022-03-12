#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ct = int{ 0 };
	while (0 < (n--)) {
		int p, q;
		cin >> p >> q;

		if (p <= q - 2) {
			++ct;
		}
	}

	cout << ct;

	return 0;
}