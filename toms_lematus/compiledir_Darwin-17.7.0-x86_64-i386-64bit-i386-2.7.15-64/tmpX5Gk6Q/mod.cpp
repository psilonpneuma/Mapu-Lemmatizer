#include <Python.h>
#include <iostream>
#include "theano_mod_helper.h"
#include <math.h>
#include <numpy/arrayobject.h>
#include <numpy/arrayscalars.h>
#include <vector>
#include <algorithm>
//////////////////////
////  Support Code
//////////////////////

    namespace {
    struct __struct_compiled_op_a08fbecae3c9f90461ec80484a296446 {
        PyObject* __ERROR;

        PyObject* storage_V3;
PyObject* storage_V5;
PyObject* storage_V7;
PyObject* storage_V9;
PyObject* storage_V11;
PyObject* storage_V13;
PyObject* storage_V15;
PyObject* storage_V1;
        

        __struct_compiled_op_a08fbecae3c9f90461ec80484a296446() {
            // This is only somewhat safe because we:
            //  1) Are not a virtual class
            //  2) Do not use any virtual classes in the members
            //  3) Deal with mostly POD and pointers

            // If this changes, we would have to revise this, but for
            // now I am tired of chasing segfaults because
            // initialization code had an error and some pointer has
            // a junk value.
            memset(this, 0, sizeof(*this));
        }
        ~__struct_compiled_op_a08fbecae3c9f90461ec80484a296446(void) {
            cleanup();
        }

        int init(PyObject* __ERROR, PyObject* storage_V3, PyObject* storage_V5, PyObject* storage_V7, PyObject* storage_V9, PyObject* storage_V11, PyObject* storage_V13, PyObject* storage_V15, PyObject* storage_V1) {
            Py_XINCREF(storage_V3);
Py_XINCREF(storage_V5);
Py_XINCREF(storage_V7);
Py_XINCREF(storage_V9);
Py_XINCREF(storage_V11);
Py_XINCREF(storage_V13);
Py_XINCREF(storage_V15);
Py_XINCREF(storage_V1);
            this->storage_V3 = storage_V3;
this->storage_V5 = storage_V5;
this->storage_V7 = storage_V7;
this->storage_V9 = storage_V9;
this->storage_V11 = storage_V11;
this->storage_V13 = storage_V13;
this->storage_V15 = storage_V15;
this->storage_V1 = storage_V1;
            









            this->__ERROR = __ERROR;
            return 0;
        }
        void cleanup(void) {
            __label_1:

double __DUMMY_1;
__label_3:

double __DUMMY_3;
__label_5:

double __DUMMY_5;
__label_7:

double __DUMMY_7;
__label_9:

double __DUMMY_9;
__label_11:

double __DUMMY_11;
__label_13:

double __DUMMY_13;
__label_15:

double __DUMMY_15;
__label_18:

double __DUMMY_18;

            Py_XDECREF(this->storage_V3);
Py_XDECREF(this->storage_V5);
Py_XDECREF(this->storage_V7);
Py_XDECREF(this->storage_V9);
Py_XDECREF(this->storage_V11);
Py_XDECREF(this->storage_V13);
Py_XDECREF(this->storage_V15);
Py_XDECREF(this->storage_V1);
        }
        int run(void) {
            int __failure = 0;
            
    PyObject* py_V1;
    
        PyArrayObject* V1;
        
            typedef npy_float32 dtype_V1;
            
    PyObject* py_V3;
    
        PyArrayObject* V3;
        
            typedef npy_float32 dtype_V3;
            
    PyObject* py_V5;
    
        PyArrayObject* V5;
        
            typedef npy_float32 dtype_V5;
            
    PyObject* py_V7;
    
        PyArrayObject* V7;
        
            typedef npy_float32 dtype_V7;
            
    PyObject* py_V9;
    
        PyArrayObject* V9;
        
            typedef npy_float32 dtype_V9;
            
    PyObject* py_V11;
    
        PyArrayObject* V11;
        
            typedef npy_float32 dtype_V11;
            
    PyObject* py_V13;
    
        PyArrayObject* V13;
        
            typedef npy_float32 dtype_V13;
            
    PyObject* py_V15;
    
        PyArrayObject* V15;
        
            typedef npy_float32 dtype_V15;
            
{

    py_V1 = PyList_GET_ITEM(storage_V1, 0);
    {Py_XINCREF(py_V1);}
    
        if (py_V1 == Py_None)
        {
            
        V1 = NULL;
        
        }
        else
        {
            
            V1 = NULL;
            if (py_V1 == Py_None) {
                // We can either fail here or set V1 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 2;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_2;}
            }
            if (!PyArray_Check(py_V1)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 2;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_2;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V1)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V1;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V1),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 2;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_2;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V1) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V1));
                {
        __failure = 2;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_2;}
            }
            
        V1 = (PyArrayObject*)(py_V1);
        Py_XINCREF(V1);
        
        }
        
{

    py_V3 = PyList_GET_ITEM(storage_V3, 0);
    {Py_XINCREF(py_V3);}
    
            V3 = NULL;
            if (py_V3 == Py_None) {
                // We can either fail here or set V3 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 4;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_4;}
            }
            if (!PyArray_Check(py_V3)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 4;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_4;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V3)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V3;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V3),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 4;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_4;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V3) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V3));
                {
        __failure = 4;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_4;}
            }
            
        V3 = (PyArrayObject*)(py_V3);
        Py_XINCREF(V3);
        
{

    py_V5 = PyList_GET_ITEM(storage_V5, 0);
    {Py_XINCREF(py_V5);}
    
            V5 = NULL;
            if (py_V5 == Py_None) {
                // We can either fail here or set V5 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 6;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_6;}
            }
            if (!PyArray_Check(py_V5)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 6;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_6;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V5)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V5;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V5),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 6;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_6;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V5) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V5));
                {
        __failure = 6;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_6;}
            }
            
        V5 = (PyArrayObject*)(py_V5);
        Py_XINCREF(V5);
        
{

    py_V7 = PyList_GET_ITEM(storage_V7, 0);
    {Py_XINCREF(py_V7);}
    
            V7 = NULL;
            if (py_V7 == Py_None) {
                // We can either fail here or set V7 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 8;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_8;}
            }
            if (!PyArray_Check(py_V7)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 8;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_8;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V7)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V7;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V7),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 8;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_8;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V7) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V7));
                {
        __failure = 8;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_8;}
            }
            
        V7 = (PyArrayObject*)(py_V7);
        Py_XINCREF(V7);
        
{

    py_V9 = PyList_GET_ITEM(storage_V9, 0);
    {Py_XINCREF(py_V9);}
    
            V9 = NULL;
            if (py_V9 == Py_None) {
                // We can either fail here or set V9 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 10;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_10;}
            }
            if (!PyArray_Check(py_V9)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 10;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_10;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V9)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V9;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V9),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 10;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_10;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V9) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V9));
                {
        __failure = 10;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_10;}
            }
            
        V9 = (PyArrayObject*)(py_V9);
        Py_XINCREF(V9);
        
{

    py_V11 = PyList_GET_ITEM(storage_V11, 0);
    {Py_XINCREF(py_V11);}
    
            V11 = NULL;
            if (py_V11 == Py_None) {
                // We can either fail here or set V11 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 12;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_12;}
            }
            if (!PyArray_Check(py_V11)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 12;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_12;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V11)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V11;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V11),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 12;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_12;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V11) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V11));
                {
        __failure = 12;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_12;}
            }
            
        V11 = (PyArrayObject*)(py_V11);
        Py_XINCREF(V11);
        
{

    py_V13 = PyList_GET_ITEM(storage_V13, 0);
    {Py_XINCREF(py_V13);}
    
            V13 = NULL;
            if (py_V13 == Py_None) {
                // We can either fail here or set V13 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 14;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_14;}
            }
            if (!PyArray_Check(py_V13)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 14;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_14;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V13)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V13;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V13),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 14;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_14;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V13) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V13));
                {
        __failure = 14;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_14;}
            }
            
        V13 = (PyArrayObject*)(py_V13);
        Py_XINCREF(V13);
        
{

    py_V15 = PyList_GET_ITEM(storage_V15, 0);
    {Py_XINCREF(py_V15);}
    
            V15 = NULL;
            if (py_V15 == Py_None) {
                // We can either fail here or set V15 to NULL and rely on Ops
                // using tensors to handle the NULL case, but if they fail to do so
                // they'll end up with nasty segfaults, so this is public service.
                PyErr_SetString(PyExc_ValueError, "expected an ndarray, not None");
                {
        __failure = 16;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_16;}
            }
            if (!PyArray_Check(py_V15)) {
                PyErr_SetString(PyExc_ValueError, "expected an ndarray");
                {
        __failure = 16;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_16;}
            }
            // We expect NPY_FLOAT32
            if (!PyArray_ISALIGNED((PyArrayObject*) py_V15)) {
                PyArrayObject * tmp = (PyArrayObject*) py_V15;
                PyErr_Format(PyExc_NotImplementedError,
                             "expected an aligned array of type %ld "
                             "(NPY_FLOAT32), got non-aligned array of type %ld"
                             " with %ld dimensions, with 3 last dims "
                             "%ld, %ld, %ld"
                             " and 3 last strides %ld %ld, %ld.",
                             (long int) NPY_FLOAT32,
                             (long int) PyArray_TYPE((PyArrayObject*) py_V15),
                             (long int) PyArray_NDIM(tmp),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_DIMS(tmp)[PyArray_NDIM(tmp)-1] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 3 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-3] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 2 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-2] : -1),
                             (long int) (PyArray_NDIM(tmp) >= 1 ?
            PyArray_STRIDES(tmp)[PyArray_NDIM(tmp)-1] : -1)
            );
                {
        __failure = 16;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_16;}
            }
            // This is a TypeError to be consistent with DEBUG_MODE
            // Note: DEBUG_MODE also tells the name of the container
            if (PyArray_TYPE((PyArrayObject*) py_V15) != NPY_FLOAT32) {
                PyErr_Format(PyExc_TypeError,
                             "expected type_num %d (NPY_FLOAT32) got %d",
                             NPY_FLOAT32, PyArray_TYPE((PyArrayObject*) py_V15));
                {
        __failure = 16;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_16;}
            }
            
        V15 = (PyArrayObject*)(py_V15);
        Py_XINCREF(V15);
        
{
// Op class Elemwise

        npy_float32* V3_iter;
        
                npy_intp V3_n0;
                ssize_t V3_stride0;
                int V3_jump0_0;
                
                npy_intp V3_n1;
                ssize_t V3_stride1;
                int V3_jump1_1;
                
                npy_intp V3_n2;
                ssize_t V3_stride2;
                int V3_jump2_2;
                
        npy_float32* V5_iter;
        
                int V5_jumpx_0;
                
                int V5_jumpx_1;
                
                npy_intp V5_n2;
                ssize_t V5_stride2;
                int V5_jump2_2;
                
        npy_float32* V7_iter;
        
                npy_intp V7_n0;
                ssize_t V7_stride0;
                int V7_jump0_0;
                
                npy_intp V7_n1;
                ssize_t V7_stride1;
                int V7_jump1_1;
                
                npy_intp V7_n2;
                ssize_t V7_stride2;
                int V7_jump2_2;
                
        npy_float32* V9_iter;
        
                int V9_jumpx_0;
                
                int V9_jumpx_1;
                
                npy_intp V9_n2;
                ssize_t V9_stride2;
                int V9_jump2_2;
                
        npy_float32* V11_iter;
        
                npy_intp V11_n0;
                ssize_t V11_stride0;
                int V11_jump0_0;
                
                npy_intp V11_n1;
                ssize_t V11_stride1;
                int V11_jump1_1;
                
                npy_intp V11_n2;
                ssize_t V11_stride2;
                int V11_jump2_2;
                
        npy_float32* V13_iter;
        
                int V13_jumpx_0;
                
                int V13_jumpx_1;
                
                npy_intp V13_n2;
                ssize_t V13_stride2;
                int V13_jump2_2;
                
        npy_float32* V15_iter;
        
                int V15_jumpx_0;
                
                npy_intp V15_n1;
                ssize_t V15_stride1;
                int V15_jump1_1;
                
                npy_intp V15_n2;
                ssize_t V15_stride2;
                int V15_jump2_2;
                

            if (PyArray_NDIM(V3) < 3) {
                PyErr_SetString(PyExc_ValueError, "Not enough dimensions on input.");
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
                V3_n2 = PyArray_DIMS(V3)[2];
                V3_stride2 = PyArray_STRIDES(V3)[2] / sizeof(npy_float32);
                V3_jump2_2 = (V3_stride2) - (0);
                //printf("V3_jump2_2 is:");
                //std::cout << V3_jump2_2 << std::endl;
                
                V3_n1 = PyArray_DIMS(V3)[1];
                V3_stride1 = PyArray_STRIDES(V3)[1] / sizeof(npy_float32);
                V3_jump1_1 = (V3_stride1) - (V3_n2*V3_stride2);
                //printf("V3_jump1_1 is:");
                //std::cout << V3_jump1_1 << std::endl;
                
                V3_n0 = PyArray_DIMS(V3)[0];
                V3_stride0 = PyArray_STRIDES(V3)[0] / sizeof(npy_float32);
                V3_jump0_0 = (V3_stride0) - (V3_n1*V3_stride1);
                //printf("V3_jump0_0 is:");
                //std::cout << V3_jump0_0 << std::endl;
                
            if (PyArray_NDIM(V5) < 3) {
                PyErr_SetString(PyExc_ValueError, "Not enough dimensions on input.");
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
                V5_n2 = PyArray_DIMS(V5)[2];
                V5_stride2 = PyArray_STRIDES(V5)[2] / sizeof(npy_float32);
                V5_jump2_2 = (V5_stride2) - (0);
                //printf("V5_jump2_2 is:");
                //std::cout << V5_jump2_2 << std::endl;
                
                V5_jumpx_1 = -(V5_n2*V5_stride2);
                //printf("V5_jumpx_1 is:");
                //std::cout << V5_jumpx_1 << std::endl;
                
                V5_jumpx_0 = -(0);
                //printf("V5_jumpx_0 is:");
                //std::cout << V5_jumpx_0 << std::endl;
                
            if (PyArray_NDIM(V7) < 3) {
                PyErr_SetString(PyExc_ValueError, "Not enough dimensions on input.");
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
                V7_n2 = PyArray_DIMS(V7)[2];
                V7_stride2 = PyArray_STRIDES(V7)[2] / sizeof(npy_float32);
                V7_jump2_2 = (V7_stride2) - (0);
                //printf("V7_jump2_2 is:");
                //std::cout << V7_jump2_2 << std::endl;
                
                V7_n1 = PyArray_DIMS(V7)[1];
                V7_stride1 = PyArray_STRIDES(V7)[1] / sizeof(npy_float32);
                V7_jump1_1 = (V7_stride1) - (V7_n2*V7_stride2);
                //printf("V7_jump1_1 is:");
                //std::cout << V7_jump1_1 << std::endl;
                
                V7_n0 = PyArray_DIMS(V7)[0];
                V7_stride0 = PyArray_STRIDES(V7)[0] / sizeof(npy_float32);
                V7_jump0_0 = (V7_stride0) - (V7_n1*V7_stride1);
                //printf("V7_jump0_0 is:");
                //std::cout << V7_jump0_0 << std::endl;
                
            if (PyArray_NDIM(V9) < 3) {
                PyErr_SetString(PyExc_ValueError, "Not enough dimensions on input.");
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
                V9_n2 = PyArray_DIMS(V9)[2];
                V9_stride2 = PyArray_STRIDES(V9)[2] / sizeof(npy_float32);
                V9_jump2_2 = (V9_stride2) - (0);
                //printf("V9_jump2_2 is:");
                //std::cout << V9_jump2_2 << std::endl;
                
                V9_jumpx_1 = -(V9_n2*V9_stride2);
                //printf("V9_jumpx_1 is:");
                //std::cout << V9_jumpx_1 << std::endl;
                
                V9_jumpx_0 = -(0);
                //printf("V9_jumpx_0 is:");
                //std::cout << V9_jumpx_0 << std::endl;
                
            if (PyArray_NDIM(V11) < 3) {
                PyErr_SetString(PyExc_ValueError, "Not enough dimensions on input.");
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
                V11_n2 = PyArray_DIMS(V11)[2];
                V11_stride2 = PyArray_STRIDES(V11)[2] / sizeof(npy_float32);
                V11_jump2_2 = (V11_stride2) - (0);
                //printf("V11_jump2_2 is:");
                //std::cout << V11_jump2_2 << std::endl;
                
                V11_n1 = PyArray_DIMS(V11)[1];
                V11_stride1 = PyArray_STRIDES(V11)[1] / sizeof(npy_float32);
                V11_jump1_1 = (V11_stride1) - (V11_n2*V11_stride2);
                //printf("V11_jump1_1 is:");
                //std::cout << V11_jump1_1 << std::endl;
                
                V11_n0 = PyArray_DIMS(V11)[0];
                V11_stride0 = PyArray_STRIDES(V11)[0] / sizeof(npy_float32);
                V11_jump0_0 = (V11_stride0) - (V11_n1*V11_stride1);
                //printf("V11_jump0_0 is:");
                //std::cout << V11_jump0_0 << std::endl;
                
            if (PyArray_NDIM(V13) < 3) {
                PyErr_SetString(PyExc_ValueError, "Not enough dimensions on input.");
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
                V13_n2 = PyArray_DIMS(V13)[2];
                V13_stride2 = PyArray_STRIDES(V13)[2] / sizeof(npy_float32);
                V13_jump2_2 = (V13_stride2) - (0);
                //printf("V13_jump2_2 is:");
                //std::cout << V13_jump2_2 << std::endl;
                
                V13_jumpx_1 = -(V13_n2*V13_stride2);
                //printf("V13_jumpx_1 is:");
                //std::cout << V13_jumpx_1 << std::endl;
                
                V13_jumpx_0 = -(0);
                //printf("V13_jumpx_0 is:");
                //std::cout << V13_jumpx_0 << std::endl;
                
            if (PyArray_NDIM(V15) < 3) {
                PyErr_SetString(PyExc_ValueError, "Not enough dimensions on input.");
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
                V15_n2 = PyArray_DIMS(V15)[2];
                V15_stride2 = PyArray_STRIDES(V15)[2] / sizeof(npy_float32);
                V15_jump2_2 = (V15_stride2) - (0);
                //printf("V15_jump2_2 is:");
                //std::cout << V15_jump2_2 << std::endl;
                
                V15_n1 = PyArray_DIMS(V15)[1];
                V15_stride1 = PyArray_STRIDES(V15)[1] / sizeof(npy_float32);
                V15_jump1_1 = (V15_stride1) - (V15_n2*V15_stride2);
                //printf("V15_jump1_1 is:");
                //std::cout << V15_jump1_1 << std::endl;
                
                V15_jumpx_0 = -(V15_n1*V15_stride1);
                //printf("V15_jumpx_0 is:");
                //std::cout << V15_jumpx_0 << std::endl;
                
            if (V3_n0 != V7_n0)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   0,
                   V3_n0,
                   2,
                   0,
                   V7_n0
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n0 != V11_n0)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   0,
                   V3_n0,
                   4,
                   0,
                   V11_n0
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n1 != V7_n1)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   1,
                   V3_n1,
                   2,
                   1,
                   V7_n1
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n1 != V11_n1)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   1,
                   V3_n1,
                   4,
                   1,
                   V11_n1
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n1 != V15_n1)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   1,
                   V3_n1,
                   6,
                   1,
                   V15_n1
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n2 != V5_n2)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   2,
                   V3_n2,
                   1,
                   2,
                   V5_n2
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n2 != V7_n2)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   2,
                   V3_n2,
                   2,
                   2,
                   V7_n2
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n2 != V9_n2)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   2,
                   V3_n2,
                   3,
                   2,
                   V9_n2
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n2 != V11_n2)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   2,
                   V3_n2,
                   4,
                   2,
                   V11_n2
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n2 != V13_n2)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   2,
                   V3_n2,
                   5,
                   2,
                   V13_n2
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            
            if (V3_n2 != V15_n2)
            {
                PyErr_Format(PyExc_ValueError, "Input dimension mis-match. (input[%i].shape[%i] = %i, input[%i].shape[%i] = %i)",
                   0,
                   2,
                   V3_n2,
                   6,
                   2,
                   V15_n2
                );
                {
        __failure = 17;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_17;}
            }
            

            if (V1) {
                Py_XDECREF(V1);
            }
            V1 = V3;
            Py_XINCREF(V1);
            
{

    std::vector< std::pair<int, int> > V3_loops(3);
    std::vector< std::pair<int, int> >::iterator V3_loops_it = V3_loops.begin();
    
            V3_loops_it->first = abs(PyArray_STRIDES(V3)[0]);
            
        V3_loops_it->second = 0;
        ++V3_loops_it;
        
            V3_loops_it->first = abs(PyArray_STRIDES(V3)[1]);
            
        V3_loops_it->second = 1;
        ++V3_loops_it;
        
            V3_loops_it->first = abs(PyArray_STRIDES(V3)[2]);
            
        V3_loops_it->second = 2;
        ++V3_loops_it;
        
    // rbegin and rend are reversed iterators, so this sorts in decreasing order
    std::sort(V3_loops.rbegin(), V3_loops.rend());
    

    int init_totals[3] = {V3_n0, V3_n1, V3_n2};
    
    V3_loops_it = V3_loops.begin();
    
        int TOTAL_0 = init_totals[V3_loops_it->second];
        ++V3_loops_it;
        
        int TOTAL_1 = init_totals[V3_loops_it->second];
        ++V3_loops_it;
        
        int TOTAL_2 = init_totals[V3_loops_it->second];
        ++V3_loops_it;
        

    int init_strides[7][3] = {
        V3_stride0, V3_stride1, V3_stride2, 
0, 0, V5_stride2, 
V7_stride0, V7_stride1, V7_stride2, 
0, 0, V9_stride2, 
V11_stride0, V11_stride1, V11_stride2, 
0, 0, V13_stride2, 
0, V15_stride1, V15_stride2
    };
    std::vector< std::pair<int, int> >::reverse_iterator V3_loops_rit;
    
        V3_loops_rit = V3_loops.rbegin();
            int V3_stride_l2 = init_strides[0][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V3_stride_l1 = init_strides[0][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V3_stride_l0 = init_strides[0][V3_loops_rit->second];
            ++V3_loops_rit;
            
        V3_loops_rit = V3_loops.rbegin();
            int V5_stride_l2 = init_strides[1][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V5_stride_l1 = init_strides[1][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V5_stride_l0 = init_strides[1][V3_loops_rit->second];
            ++V3_loops_rit;
            
        V3_loops_rit = V3_loops.rbegin();
            int V7_stride_l2 = init_strides[2][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V7_stride_l1 = init_strides[2][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V7_stride_l0 = init_strides[2][V3_loops_rit->second];
            ++V3_loops_rit;
            
        V3_loops_rit = V3_loops.rbegin();
            int V9_stride_l2 = init_strides[3][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V9_stride_l1 = init_strides[3][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V9_stride_l0 = init_strides[3][V3_loops_rit->second];
            ++V3_loops_rit;
            
        V3_loops_rit = V3_loops.rbegin();
            int V11_stride_l2 = init_strides[4][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V11_stride_l1 = init_strides[4][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V11_stride_l0 = init_strides[4][V3_loops_rit->second];
            ++V3_loops_rit;
            
        V3_loops_rit = V3_loops.rbegin();
            int V13_stride_l2 = init_strides[5][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V13_stride_l1 = init_strides[5][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V13_stride_l0 = init_strides[5][V3_loops_rit->second];
            ++V3_loops_rit;
            
        V3_loops_rit = V3_loops.rbegin();
            int V15_stride_l2 = init_strides[6][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V15_stride_l1 = init_strides[6][V3_loops_rit->second];
            ++V3_loops_rit;
            
            int V15_stride_l0 = init_strides[6][V3_loops_rit->second];
            ++V3_loops_rit;
            
V3_iter = (npy_float32*)(PyArray_DATA(V3));
V5_iter = (npy_float32*)(PyArray_DATA(V5));
V7_iter = (npy_float32*)(PyArray_DATA(V7));
V9_iter = (npy_float32*)(PyArray_DATA(V9));
V11_iter = (npy_float32*)(PyArray_DATA(V11));
V13_iter = (npy_float32*)(PyArray_DATA(V13));
V15_iter = (npy_float32*)(PyArray_DATA(V15));


        for(int ITER_0 = 0; ITER_0<TOTAL_0; ITER_0++)
        { // begin loop 0
            
            
        for(int ITER_1 = 0; ITER_1<TOTAL_1; ITER_1++)
        { // begin loop 1
            
            
        for(int ITER_2 = 0; ITER_2<TOTAL_2; ITER_2++)
        { // begin loop 2
            npy_float32 &V3_i = * ( V3_iter+V3_stride_l2*ITER_2+V3_stride_l1*ITER_1+V3_stride_l0*ITER_0);
npy_float32 &V5_i = * ( V5_iter+V5_stride_l2*ITER_2+V5_stride_l1*ITER_1+V5_stride_l0*ITER_0);
npy_float32 &V7_i = * ( V7_iter+V7_stride_l2*ITER_2+V7_stride_l1*ITER_1+V7_stride_l0*ITER_0);
npy_float32 &V9_i = * ( V9_iter+V9_stride_l2*ITER_2+V9_stride_l1*ITER_1+V9_stride_l0*ITER_0);
npy_float32 &V11_i = * ( V11_iter+V11_stride_l2*ITER_2+V11_stride_l1*ITER_1+V11_stride_l0*ITER_0);
npy_float32 &V13_i = * ( V13_iter+V13_stride_l2*ITER_2+V13_stride_l1*ITER_1+V13_stride_l0*ITER_0);
npy_float32 &V15_i = * ( V15_iter+V15_stride_l2*ITER_2+V15_stride_l1*ITER_1+V15_stride_l0*ITER_0);

            
        {
            #define V1_i V3_i

            {
npy_float32 V17_tmp1;
V17_tmp1 = V3_i + V5_i + V7_i + V9_i + V11_i + V13_i;
npy_float32 V17_tmp2;
V17_tmp2 = tanh(V17_tmp1);
V1_i = V17_tmp2 * V15_i;
}

            #undef V1_i

        }
        
        } // end loop 2
        
        } // end loop 1
        
        } // end loop 0
        
}
__label_17:

double __DUMMY_17;

}
__label_16:

        if (V15) {
            Py_XDECREF(V15);
        }
        
    {Py_XDECREF(py_V15);}
    
double __DUMMY_16;

}
__label_14:

        if (V13) {
            Py_XDECREF(V13);
        }
        
    {Py_XDECREF(py_V13);}
    
double __DUMMY_14;

}
__label_12:

        if (V11) {
            Py_XDECREF(V11);
        }
        
    {Py_XDECREF(py_V11);}
    
double __DUMMY_12;

}
__label_10:

        if (V9) {
            Py_XDECREF(V9);
        }
        
    {Py_XDECREF(py_V9);}
    
double __DUMMY_10;

}
__label_8:

        if (V7) {
            Py_XDECREF(V7);
        }
        
    {Py_XDECREF(py_V7);}
    
double __DUMMY_8;

}
__label_6:

        if (V5) {
            Py_XDECREF(V5);
        }
        
    {Py_XDECREF(py_V5);}
    
double __DUMMY_6;

}
__label_4:

        if (V3) {
            Py_XDECREF(V3);
        }
        
    {Py_XDECREF(py_V3);}
    
double __DUMMY_4;

}
__label_2:

    if (!__failure) {
      
        {Py_XDECREF(py_V1);}
        if (!V1) {
            Py_INCREF(Py_None);
            py_V1 = Py_None;
        }
        else if ((void*)py_V1 != (void*)V1) {
            py_V1 = (PyObject*)V1;
        }

        {Py_XINCREF(py_V1);}

        if (V1 && !PyArray_ISALIGNED((PyArrayObject*) py_V1)) {
            PyErr_Format(PyExc_NotImplementedError,
                         "c_sync: expected an aligned array, got non-aligned array of type %ld"
                         " with %ld dimensions, with 3 last dims "
                         "%ld, %ld, %ld"
                         " and 3 last strides %ld %ld, %ld.",
                         (long int) PyArray_TYPE((PyArrayObject*) py_V1),
                         (long int) PyArray_NDIM(V1),
                         (long int) (PyArray_NDIM(V1) >= 3 ?
        PyArray_DIMS(V1)[PyArray_NDIM(V1)-3] : -1),
                         (long int) (PyArray_NDIM(V1) >= 2 ?
        PyArray_DIMS(V1)[PyArray_NDIM(V1)-2] : -1),
                         (long int) (PyArray_NDIM(V1) >= 1 ?
        PyArray_DIMS(V1)[PyArray_NDIM(V1)-1] : -1),
                         (long int) (PyArray_NDIM(V1) >= 3 ?
        PyArray_STRIDES(V1)[PyArray_NDIM(V1)-3] : -1),
                         (long int) (PyArray_NDIM(V1) >= 2 ?
        PyArray_STRIDES(V1)[PyArray_NDIM(V1)-2] : -1),
                         (long int) (PyArray_NDIM(V1) >= 1 ?
        PyArray_STRIDES(V1)[PyArray_NDIM(V1)-1] : -1)
        );
            {
        __failure = 2;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_2;}
        }
        
      PyObject* old = PyList_GET_ITEM(storage_V1, 0);
      {Py_XINCREF(py_V1);}
      PyList_SET_ITEM(storage_V1, 0, py_V1);
      {Py_XDECREF(old);}
    }
    
        if (V1) {
            Py_XDECREF(V1);
        }
        
    {Py_XDECREF(py_V1);}
    
double __DUMMY_2;

}

            
        if (__failure) {
            // When there is a failure, this code puts the exception
            // in __ERROR.
            PyObject* err_type = NULL;
            PyObject* err_msg = NULL;
            PyObject* err_traceback = NULL;
            PyErr_Fetch(&err_type, &err_msg, &err_traceback);
            if (!err_type) {err_type = Py_None;Py_INCREF(Py_None);}
            if (!err_msg) {err_msg = Py_None; Py_INCREF(Py_None);}
            if (!err_traceback) {err_traceback = Py_None; Py_INCREF(Py_None);}
            PyObject* old_err_type = PyList_GET_ITEM(__ERROR, 0);
            PyObject* old_err_msg = PyList_GET_ITEM(__ERROR, 1);
            PyObject* old_err_traceback = PyList_GET_ITEM(__ERROR, 2);
            PyList_SET_ITEM(__ERROR, 0, err_type);
            PyList_SET_ITEM(__ERROR, 1, err_msg);
            PyList_SET_ITEM(__ERROR, 2, err_traceback);
            {Py_XDECREF(old_err_type);}
            {Py_XDECREF(old_err_msg);}
            {Py_XDECREF(old_err_traceback);}
        }
        // The failure code is returned to index what code block failed.
        return __failure;
        
        }
    };
    }
    

        static int __struct_compiled_op_a08fbecae3c9f90461ec80484a296446_executor(__struct_compiled_op_a08fbecae3c9f90461ec80484a296446* self) {
            return self->run();
        }

        static void __struct_compiled_op_a08fbecae3c9f90461ec80484a296446_destructor(void* executor, void* self) {
            delete ((__struct_compiled_op_a08fbecae3c9f90461ec80484a296446*)self);
        }
        
//////////////////////
////  Functions
//////////////////////
static PyObject * instantiate(PyObject * self, PyObject *argtuple) {
  assert(PyTuple_Check(argtuple));
  if (9 != PyTuple_Size(argtuple)){ 
     PyErr_Format(PyExc_TypeError, "Wrong number of arguments, expected 9, got %i", (int)PyTuple_Size(argtuple));
     return NULL;
  }
  __struct_compiled_op_a08fbecae3c9f90461ec80484a296446* struct_ptr = new __struct_compiled_op_a08fbecae3c9f90461ec80484a296446();
  if (struct_ptr->init( PyTuple_GET_ITEM(argtuple, 0),PyTuple_GET_ITEM(argtuple, 1),PyTuple_GET_ITEM(argtuple, 2),PyTuple_GET_ITEM(argtuple, 3),PyTuple_GET_ITEM(argtuple, 4),PyTuple_GET_ITEM(argtuple, 5),PyTuple_GET_ITEM(argtuple, 6),PyTuple_GET_ITEM(argtuple, 7),PyTuple_GET_ITEM(argtuple, 8) ) != 0) {
    delete struct_ptr;
    return NULL;
  }
  PyObject* thunk = PyCObject_FromVoidPtrAndDesc((void*)(&__struct_compiled_op_a08fbecae3c9f90461ec80484a296446_executor), struct_ptr, __struct_compiled_op_a08fbecae3c9f90461ec80484a296446_destructor);
  return thunk; }

//////////////////////
////  Module init
//////////////////////
static PyMethodDef MyMethods[] = {
	{"instantiate", instantiate, METH_VARARGS, "undocumented"} ,
	{NULL, NULL, 0, NULL}
};
PyMODINIT_FUNC inita08fbecae3c9f90461ec80484a296446(void){
   import_array();
   (void) Py_InitModule("a08fbecae3c9f90461ec80484a296446", MyMethods);
}
