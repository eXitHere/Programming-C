#include<iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    for (int a = 1; a <= 100; a++) { // O(max(A, C)^4)
        for (int c = 1; c <= 100; c++) {
            if (a*c == A) {
                for (int b = -100; b <= 100; b++) {
                    for (int d = -100; d <= 100; d++) {
                        if (b * d == C && a*d + b*c == B) {
                            cout << a << " " << b << " " << c << " " << d << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "No Solution" << endl;

    return 0;
}
