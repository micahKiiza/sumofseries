#include <iostream>
using namespace std;

int main() {
    double sum = 0.0; // to store the sum of the series

    // Loop through the series: 1/3, 3/5, 5/7, ..., 95/97
    for (int numerator = 1; numerator <= 95; numerator += 2) {
        int denominator = numerator + 2;
        sum += static_cast<double>(numerator) / denominator; // cast numerator to double for floating-point division
    }

    // Output the result
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
