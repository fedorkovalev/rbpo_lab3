module BPZ1901.Kovalev.Lab3.Task3;
import <cmath>;
namespace RBPO::Lab3::Task3 {
	double f1(const double x) {
		return (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
	}
}