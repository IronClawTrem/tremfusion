/*
===========================================================================
Copyright (C) 2008 John Black

This file is part of Tremulous.

Tremulous is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Tremulous is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Tremulous; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

#include <Python.h>


#include "../qcommon/q_shared.h"
#include "../qcommon/qcommon.h"

#include "python_public.h"
// py_main.c
PyObject *PY_CvarGet(PyObject *self, PyObject *args);
PyObject *PY_CvarSet(PyObject *self, PyObject *args);
PyObject* PY_ExecuteText(PyObject* self, PyObject* pArgs);
PyObject* FixedPrint(PyObject* self, PyObject* pArgs);


extern PyMethodDef cvar_methods[];
extern PyMethodDef server_methods[];

extern char *serverModuleInitstring;