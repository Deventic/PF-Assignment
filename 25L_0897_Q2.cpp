#include<iostream>

using namespace std;

int main() {
    int n;
	cout << "Enter a number:";
    cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		if (i == 1) {
			for (int j = 1; j <= n; j++) {
				cout << "* ";
			}
		}
		else {
			for (int j = i; j <= n; j++) {
				if (j == i || j == n) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}

		}

		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		if (i == 1) {
			for (int j = 1; j <= n; j++) {
				cout << "* ";
			}
		}
		else {
			for (int j = i; j <= n; j++) {
				if (j == i || j == n) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}

		}
		cout << endl;
	}
}