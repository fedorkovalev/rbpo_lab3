export module BPZ1901.Kovalev.Lab3.Task1;
import <cmath>;
namespace RBPO::Lab3::Task1
{
    export double f1(const double x) {
        return (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
    }
    export double f2(const double x) {
        return ((x <= 0) ? abs(-x * x + 3 * x + 8) : sqrt(x * x + 1 / x));
    }
    export double a(const double i) {
        return pow(-1.0, i) * (1 / (i * i + pow(2.0, i)));
    }
    export double f3(double n) {
        double f_3 = 0;
        for (int i = 0; i <= n; ++i) {
            f_3 += a(i);
        }
        return f_3;
    }
    export double f4(double eps) {
        int i;
        for (i = 0; abs(a(i) - a(i + 1)) < eps; ++i) {}
        return a(i + 1);
    }
}