module BPZ1901.Kovalev.Lab3.Task4:f_1;
import <cmath>;
namespace RBPO::Lab3::Task4 {
	double f1(const double x) {
		return (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
	}
}