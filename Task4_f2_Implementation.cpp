module BPZ1901.Kovalev.Lab3.Task4:f_2;
import <cmath>;
namespace RBPO::Lab3::Task4 {
    double f2(const double x) {
        if (x <= 0) return abs(-x * x + 3 * x + 8);
        else return sqrt(x * x + 1 / x);
    }
}