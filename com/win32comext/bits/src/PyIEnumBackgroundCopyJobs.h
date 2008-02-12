// This file declares the IEnumBackgroundCopyJobs Interface for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

#include "Bits.h"
#include "PythonCOM.h"

class PyIEnumBackgroundCopyJobs : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyIEnumBackgroundCopyJobs);
	static IEnumBackgroundCopyJobs *GetI(PyObject *self);
	static PyComEnumTypeObject type;

	// The Python methods
	static PyObject *Next(PyObject *self, PyObject *args);
	static PyObject *Skip(PyObject *self, PyObject *args);
	static PyObject *Reset(PyObject *self, PyObject *args);
	static PyObject *Clone(PyObject *self, PyObject *args);
	static PyObject *GetCount(PyObject *self, PyObject *args);

protected:
	PyIEnumBackgroundCopyJobs(IUnknown *pdisp);
	~PyIEnumBackgroundCopyJobs();
};
