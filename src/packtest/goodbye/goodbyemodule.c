#include <Python.h>

static PyObject *goodbye_saygoodbye(PyObject *self, PyObject *args);
static PyObject *goodbye_sayonara(PyObject *self, PyObject *args);

static char goodbye_doc[] = "Ways to say goodbye.";

static PyMethodDef GoodbyeMethods[] = {
    {"saygoodbye", goodbye_saygoodbye, METH_VARARGS, "Say goodbye."},
    {"sayonara", goodbye_sayonara, METH_VARARGS, "Say sayonara."},
    {NULL, NULL, 0, NULL}
};

#if PY_MAJOR_VERSION >= 3
static struct PyModuleDef goodbyemodule = {
    PyModuleDef_HEAD_INIT,
    "goodbye",
    goodbye_doc,
    -1,
    GoodbyeMethods
};
#endif

#if PY_MAJOR_VERSION >= 3
PyMODINIT_FUNC PyInit_goodbye(void)
#else
void initgoodbye(void)
#endif
{
    PyObject *m;
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&goodbyemodule);
#else
    m = Py_InitModule3("goodbye", GoodbyeMethods, goodbye_doc);
#endif

#if PY_MAJOR_VERSION >= 3
    return m;
#endif
}

static PyObject *goodbye_saygoodbye(PyObject *self, PyObject *args)
{
    printf("Goodbye!\n");
    Py_RETURN_NONE;
}

static PyObject *goodbye_sayonara(PyObject *self, PyObject *args)
{
    printf("Sayonara!\n");
    Py_RETURN_NONE;
}

