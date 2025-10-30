#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a 64-bit number: ";
    cin >> num;

    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num;
    }

    bool found = false;

    for (long long i = 2; i <= num; i++) {
        if (num % i == 0) {
            long long j = num / i;

            bool prime1 = true;
            if (i < 2)
                prime1 = false;
            else {
                for (long long a = 2; a < i; a++) {
                    if (i % a == 0) {
                        prime1 = false;
                        break;
                    }
                }
            }

            bool prime2 = true;
            if (j < 2)
                prime2 = false;
            else {
                for (long long b = 2; b < j; b++) {
                    if (j % b == 0) {
                        prime2 = false;
                        break;
                    }
                }
            }

            if (prime1 && prime2) {
                if (isNegative)
                    cout << "Prime factors found: -1, " << i << " and " << j << endl;
                else
                    cout << "Prime factors found: " << i << " and " << j << endl;

                found = true;
                break;
            }
        }
    }

    if (!found) {
        if (isNegative)
            cout << "No two prime factors found that multiply to -" << num << endl;
        else
            cout << "No two prime factors found that multiply to " << num << endl;
    }

    return 0;
}
