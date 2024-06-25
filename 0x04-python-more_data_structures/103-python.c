#!/usr/bin/python3
#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p) {
    if (!PyList_Check(p)) {
        fprintf(stderr, "Invalid list object\n");
        return;
    }
    
    Py_ssize_t size = PyList_Size(p);
    Py_ssize_t allocated = ((PyListObject *)p)->allocated;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", allocated);
    
    for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject *item = PyList_GetItem(p, i);
        const char *type_name = Py_TYPE(item)->tp_name;
        printf("Element %ld: %s\n", i, type_name);
    }
}

void print_python_bytes(PyObject *p) {
    if (!PyBytes_Check(p)) {
        fprintf(stderr, "Invalid bytes object\n");
        return;
    }
    
    Py_ssize_t size = PyBytes_Size(p);
    char *data = PyBytes_AsString(p);
    
    printf("[.] bytes object info\n");
    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", data);
    
    printf("  first 10 bytes:");
    if (size < 10) {
        for (Py_ssize_t i = 0; i < size; ++i)
            printf(" %02x", (unsigned char)data[i]);
    } else {
        for (Py_ssize_t i = 0; i < 10; ++i)
            printf(" %02x", (unsigned char)data[i]);
    }
    printf("\n");
}

