#include <iostream>
#include <cmath>


double findSum(double num) {

    double pi = M_PI;
    double n = num;
    double sumOfLine = pow(pi, 3) / 32;
    double sumOfElement = 0;
    double sum = 0;

    do {
        sum += sumOfElement;
        sumOfElement = pow(-1, n + 1) / pow(2 * n - 1, 3);
        n++;
    } while (abs(sumOfElement) > pow(10, -6));

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Necessary sum: " << sumOfLine << std::endl;
    std::cout << "Error rate: " << abs(sumOfLine - sum) << std::endl;

    return 0;

}

int main() {
    findSum(1);
}
