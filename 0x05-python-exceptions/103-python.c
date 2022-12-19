#include <Python.h>
#include <stdio.h>
#include <stdlib.h>
#include <object.h>
#include <listobject.h>
#include <bytesobject.h>
#include <floatobject.h>
#include <string.h>

/**
 * print_python_bytes - print python things
 * @p: pointer to PyObject p
 */

void print_python_bytes(PyObject *p)
{
	size_t b, i;
	char *str;


	setbuf(stdout, NULL);
	printf("[.] bytes object info\n");
	if (PyBytes_Check(p) == 0)
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	str = ((PyBytesObject *)(p))->ob_sval, b = PyBytes_Size(p);
	printf("  size: %ld\n  trying string: %s\n", b, str);
	b >= 10 ? b = 10 : b++;
	printf("  first %ld bytes: ", b);
	for (i = 0; i < b - 1; i++)
		printf("%02hhx ", str[i]);
	printf("%02hhx\n", str[i]);
}

/**
 * print_python_float - print python things
 * @p: pointer to PyObject p
 */







