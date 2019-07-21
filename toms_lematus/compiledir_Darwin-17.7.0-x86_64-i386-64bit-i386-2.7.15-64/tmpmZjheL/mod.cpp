#include <Python.h>
#include <iostream>
#include "theano_mod_helper.h"
#include <math.h>
#include <numpy/arrayobject.h>
#include <numpy/arrayscalars.h>
//////////////////////
////  Support Code
//////////////////////

    namespace {
    struct __struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b {
        PyObject* __ERROR;

        PyObject* storage_V3;
PyObject* storage_V5;
PyObject* storage_V7;
PyObject* storage_V9;
PyObject* storage_V1;
        

        __struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b() {
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
        ~__struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b(void) {
            cleanup();
        }

        int init(PyObject* __ERROR, PyObject* storage_V3, PyObject* storage_V5, PyObject* storage_V7, PyObject* storage_V9, PyObject* storage_V1) {
            Py_XINCREF(storage_V3);
Py_XINCREF(storage_V5);
Py_XINCREF(storage_V7);
Py_XINCREF(storage_V9);
Py_XINCREF(storage_V1);
            this->storage_V3 = storage_V3;
this->storage_V5 = storage_V5;
this->storage_V7 = storage_V7;
this->storage_V9 = storage_V9;
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
__label_12:

double __DUMMY_12;

            Py_XDECREF(this->storage_V3);
Py_XDECREF(this->storage_V5);
Py_XDECREF(this->storage_V7);
Py_XDECREF(this->storage_V9);
Py_XDECREF(this->storage_V1);
        }
        int run(void) {
            int __failure = 0;
            
    PyObject* py_V1;
    
        PyArrayObject* V1;
        
    PyObject* py_V3;
    
        PyArrayObject* V3;
        
    PyObject* py_V5;
    
        PyArrayObject* V5;
        
    PyObject* py_V7;
    
        npy_int64 V7;
        
    PyObject* py_V9;
    
        npy_int64 V9;
        
{

    py_V1 = Py_None;
    {Py_XINCREF(py_V1);}
    
        V1 = NULL;
        
{

    py_V3 = PyList_GET_ITEM(storage_V3, 0);
    {Py_XINCREF(py_V3);}
    
        V3 = (PyArrayObject*)(py_V3);
        Py_XINCREF(V3);
        
{

    py_V5 = PyList_GET_ITEM(storage_V5, 0);
    {Py_XINCREF(py_V5);}
    
        V5 = (PyArrayObject*)(py_V5);
        Py_XINCREF(V5);
        
{

    py_V7 = PyList_GET_ITEM(storage_V7, 0);
    {Py_XINCREF(py_V7);}
    
        PyArray_ScalarAsCtype(py_V7, &V7);
        
{

    py_V9 = PyList_GET_ITEM(storage_V9, 0);
    {Py_XINCREF(py_V9);}
    
        PyArray_ScalarAsCtype(py_V9, &V9);
        
{
// Op class IncSubtensor
PyArrayObject * zview = NULL;
        if (1)
        {
            if (V3 != V1)
            {
                Py_XDECREF(V1);
                Py_INCREF(V3);
                V1 = V3;
            }
        }
        else
        {
            Py_XDECREF(V1);
            V1 = (PyArrayObject*)PyArray_FromAny(py_V3, NULL, 0, 0,
                NPY_ARRAY_ENSURECOPY, NULL);
        }
        
        // Argument of the view
        npy_intp xview_dims[3];
        npy_intp xview_strides[3];

        
        // One more argument of the view
        npy_intp xview_offset = 0;

        // The subtensor is created by iterating over the dimensions
        // and updating stride, shape, and data pointers

        int is_slice[] = {1,1,1};
        npy_intp subtensor_spec[9];
        subtensor_spec[0] = 9223372036854775806;
subtensor_spec[1] = 9223372036854775806;
subtensor_spec[2] = 9223372036854775806;
subtensor_spec[3] = 9223372036854775806;
subtensor_spec[4] = 9223372036854775806;
subtensor_spec[5] = 9223372036854775806;
subtensor_spec[6] = V7;
subtensor_spec[7] = V9;
subtensor_spec[8] = 9223372036854775806;;
        int spec_pos = 0; //position in subtensor_spec
        int inner_ii = 0; // the current dimension of zview
        int outer_ii = 0; // current dimension of z


        for (; outer_ii < 3; ++outer_ii)
        {
            if (is_slice[outer_ii])
            {
                npy_intp length = PyArray_DIMS(V1)[outer_ii];
                npy_intp slicelength;
                npy_intp start = subtensor_spec[spec_pos+0];
                npy_intp stop  = subtensor_spec[spec_pos+1];
                npy_intp step  = subtensor_spec[spec_pos+2];
                if (step == 9223372036854775806) step = 1;

                npy_intp defstart = step < 0 ? length-1 : 0;
                npy_intp defstop = step < 0 ? -1 : length;

                // logic adapted from
                // PySlice_GetIndicesEx in python source
                if (!step)
                {
                    PyErr_Format(PyExc_ValueError,
                                 "slice step cannot be zero");
                    {
        __failure = 11;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_11;};
                }

                if (start == 9223372036854775806)
                {
                    start = defstart;
                }
                else
                {
                    if (start < 0) start += length;
                    if (start < 0) start = (step < 0) ? -1 : 0;
                    if (start >= length)
                        start = (step < 0) ? length - 1 : length;
                }

                if (stop == 9223372036854775806)
                {
                    stop = defstop;
                }
                else
                {
                    if (stop < 0) stop += length;
                    if (stop < 0) stop = (step < 0) ? -1 : 0;
                    if (stop >= length)
                        stop = (step < 0) ? length - 1 : length;
                }

                if ((step < 0 && stop >= start)
                    || (step > 0 && start >= stop)) {
                    slicelength = 0;
                }
                else if (step < 0) {
                    slicelength = (stop-start+1)/step+1;
                }
                else {
                    slicelength = (stop-start-1)/step+1;
                }

                if (0){
                    fprintf(stdout, "start %zi\n", start);
                    fprintf(stdout, "stop %zi\n", stop);
                    fprintf(stdout, "step %zi\n", step);
                    fprintf(stdout, "length %zi\n", length);
                    fprintf(stdout, "slicelength %zi\n", slicelength);
                }

                assert (slicelength <= length);

                xview_offset += (npy_intp)PyArray_STRIDES(V1)[outer_ii]
                    * start * 1;
                xview_dims[inner_ii] = slicelength;
                xview_strides[inner_ii] = (npy_intp)PyArray_STRIDES(V1)[outer_ii] * step;

                inner_ii += 1;
                spec_pos += 3;
            }
            else // tuple coord `outer_ii` is an int
            {
                int idx = subtensor_spec[spec_pos];
                if (idx < 0) idx += PyArray_DIMS(V1)[outer_ii];
                if (idx >= 0)
                {
                    if (idx < PyArray_DIMS(V1)[outer_ii])
                    {
                        xview_offset += (npy_intp)PyArray_STRIDES(V1)[outer_ii] * idx *
                               1;
                    }
                    else
                    {
                        PyErr_Format(PyExc_IndexError,"index out of bounds");
                        {
        __failure = 11;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_11;};
                    }
                }
                else
                {
                    PyErr_Format(PyExc_IndexError,"index out of bounds");
                    {
        __failure = 11;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_11;};
                }

                spec_pos += 1;
            }
        }
        assert (inner_ii <= 3);
        while (inner_ii < 3)
        {
            assert (outer_ii < PyArray_NDIM(V1));
            xview_dims[inner_ii] = PyArray_DIMS(V1)[outer_ii];
            xview_strides[inner_ii] = PyArray_STRIDES(V1)[outer_ii];

            inner_ii += 1;
            outer_ii += 1;
        }
        
        //TODO: give this Op a second output so that this view can be cached
        //TODO: alternatively, fix the memory leak on failure
        Py_INCREF(PyArray_DESCR(V1));
        zview = (PyArrayObject*)PyArray_NewFromDescr(
                &PyArray_Type,
                PyArray_DESCR(V1),
                3,
                xview_dims, //PyArray_DIMS(V1),
                xview_strides, //PyArray_STRIDES(V1),
                PyArray_BYTES(V1) + xview_offset, //PyArray_DATA(V1),
                PyArray_FLAGS(V1),
                NULL);
        ;
        if (!zview)
        {
            {
        __failure = 11;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_11;};
        }
        
        if (1)
        {
            if (PyArray_CopyInto(zview, V5)) // does broadcasting
            {
                Py_DECREF(zview);
                {
        __failure = 11;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_11;};
            }
        }
        else
        {
            
            PyArrayObject * add_rval = (PyArrayObject*)PyNumber_InPlaceAdd(
                    (PyObject*)zview, py_V5);
            if (add_rval)
            {
                assert (PyArray_Check((PyObject*)add_rval));
                assert (PyArray_DATA(add_rval) == PyArray_DATA(zview));
                Py_DECREF(add_rval);
            }
            else
            {
                Py_DECREF(zview);
                {
        __failure = 11;
        if (!PyErr_Occurred()) {
            PyErr_SetString(PyExc_RuntimeError,
                "Unexpected error in an Op's C code. "
                "No Python exception was set.");
            }
        goto __label_11;};
            }
        }
        Py_DECREF(zview);__label_11:

double __DUMMY_11;

}
__label_10:

    {Py_XDECREF(py_V9);}
    
double __DUMMY_10;

}
__label_8:

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
    

        static int __struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b_executor(__struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b* self) {
            return self->run();
        }

        static void __struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b_destructor(void* executor, void* self) {
            delete ((__struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b*)self);
        }
        
//////////////////////
////  Functions
//////////////////////
static PyObject * instantiate(PyObject * self, PyObject *argtuple) {
  assert(PyTuple_Check(argtuple));
  if (6 != PyTuple_Size(argtuple)){ 
     PyErr_Format(PyExc_TypeError, "Wrong number of arguments, expected 6, got %i", (int)PyTuple_Size(argtuple));
     return NULL;
  }
  __struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b* struct_ptr = new __struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b();
  if (struct_ptr->init( PyTuple_GET_ITEM(argtuple, 0),PyTuple_GET_ITEM(argtuple, 1),PyTuple_GET_ITEM(argtuple, 2),PyTuple_GET_ITEM(argtuple, 3),PyTuple_GET_ITEM(argtuple, 4),PyTuple_GET_ITEM(argtuple, 5) ) != 0) {
    delete struct_ptr;
    return NULL;
  }
  PyObject* thunk = PyCObject_FromVoidPtrAndDesc((void*)(&__struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b_executor), struct_ptr, __struct_compiled_op_793389cc785ed5f82bc1a2e326209a3b_destructor);
  return thunk; }

//////////////////////
////  Module init
//////////////////////
static PyMethodDef MyMethods[] = {
	{"instantiate", instantiate, METH_VARARGS, "undocumented"} ,
	{NULL, NULL, 0, NULL}
};
PyMODINIT_FUNC init793389cc785ed5f82bc1a2e326209a3b(void){
   import_array();
   (void) Py_InitModule("793389cc785ed5f82bc1a2e326209a3b", MyMethods);
}
