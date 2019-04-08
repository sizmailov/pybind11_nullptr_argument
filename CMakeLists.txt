cmake_minimum_required(VERSION 3.8)
project(pybind11_nullptr_argument)

set(CMAKE_CXX_STANDARD 11)


find_package(PythonInterp REQUIRED)
find_package(PythonLibs "${PYTHON_VERSION_MAJOR}.${PYTHON_VERSION_MINOR}" REQUIRED )
if (PYTHONLIBS_FOUND)
    include_directories(${PYTHON_INCLUDE_DIRS})
    message("Using default python version: " ${PYTHONLIBS_VERSION_STRING})
endif()


add_subdirectory(external/pybind11)
include_directories(SYSTEM external/pybind11/include)
pybind11_add_module(dev_pybind main.cpp)
