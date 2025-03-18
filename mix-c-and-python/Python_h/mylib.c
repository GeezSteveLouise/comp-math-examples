#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject* my_function(PyObject* self, PyObject* args) {
    // Your C code here
    return Py_BuildValue("s", "Hello from C!");
}

static PyMethodDef my_methods[] = {
    {"my_function", my_function, METH_VARARGS, "A simple C function"},
    {NULL, NULL, 0, NULL} /* Sentinel */
};

static struct PyModuleDef my_module = {
    PyModuleDef_HEAD_INIT,
    "my_module", /* module name */
    "Module docstring", /* module docstring */
    -1, /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables */
    my_methods
};

PyMODINIT_FUNC PyInit_my_module(void) {
    return PyModule_Create(&my_module);
}