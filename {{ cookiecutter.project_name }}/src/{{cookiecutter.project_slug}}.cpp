#include <nanobind/nanobind.h>


int add(int a, int b) {
	return a + b;
}


NB_MODULE(_{{ cookiecutter.project_slug }}, m) {

	m.def("add", &add);
}
