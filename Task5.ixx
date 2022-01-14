export module BPZ1901.Kovalev.Lab3.Task5;
import <cmath>;
namespace RBPO::Lab3::Task5
{
    export double f1(const double x);
    export double f2(const double x);
    export double a(const double i);
    export double f3(double n);
    export double f4(double eps);
}
module :private;

namespace RBPO::Lab3::Task5
{
    double f1(const double x) {
        return (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
    }
    double f2(const double x) {
        if (x <= 0) return abs(-x * x + 3 * x + 8);
        else return sqrt(x * x + 1 / x);
    }
    double a(const double i) {
        return pow(-1.0, i) * (1 / (i * i + pow(2.0, i)));
    }
    double f3(double n) {
        double f_3 = 0;
        while (n >= 0) {
            f_3 += a(n--);
        }
        return f_3;
    }
    double f4(double eps) {
        double prev_f4 = a(0);
        double curr_f4 = a(1);
        int k = 1;
        while (abs(prev_f4 - curr_f4) < eps && k < 999) {
            prev_f4 = curr_f4;
            curr_f4 = a(++k);
        }
        return curr_f4;
    }
}