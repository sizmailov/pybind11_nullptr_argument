#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

struct Foo { };

PYBIND11_MODULE(dev_pybind, m)
{
  py::class_<Foo> (m,"Foo");
  using T = std::vector<Foo>;

  m.def("func", [](T* x) { });
}
