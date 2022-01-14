module BPZ1901.Kovalev.Lab3.Task3;
import <cmath>;
namespace RBPO::Lab3::Task3 {
    double a(const double i) {
        return pow(-1.0, i) * (1 / (i * i + pow(2.0, i)));
    }
}