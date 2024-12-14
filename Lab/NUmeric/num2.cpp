#include <bits/stdc++.h>
using namespace std;
double equation(double x) {
    return x * x - x - 2;
}

int main() {
    double a = 1.0;
    double b = 3.0;
    double errLimit;

    cout << "Enter the error limit: ";
    cin >> errLimit;

    double x0;

    while (abs(b - a) > errLimit) {
        double fa = equation(a);
        double fb = equation(b);

        x0 = a - (fa * (b - a)) / (fb - fa);

        double fx0 = equation(x0);

        if (fx0 == 0.0) {
            break;
        } else if (fx0 * fa < 0) {
            b = x0;
        } else {
            a = x0;
        }
    }

    cout << "Approximate root: " << x0 << endl;

    return 0;
}