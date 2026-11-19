#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter a number for a: ";
    std::cin >> a;
    std::cout << "Enter a number for b: ";
    std::cin >> b;
    std::cout << "Enter a number for c: ";
    std::cin >> c;

    if (a == 0) {
        std::cout << "Not a quadratic equation" << std::endl;
    } else {
        double delta = (b * b) - (4 * a * c);

        if (delta < 0) {
            std::cout << "No real roots" << std::endl;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            std::cout << "x = " << x << std::endl;
        } else {
            double x1 = (-b + std::sqrt(delta)) / (2 * a);
            double x2 = (-b - std::sqrt(delta)) / (2 * a);
            std::cout << "x1 = " << x1 << " x2 = " << x2 << std::endl;
        }
    }

    return 0;
}
