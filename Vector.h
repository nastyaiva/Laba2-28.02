#pragma once
#ifndef vector_h
#define vector_h
#include <iostream>

class Vector {
private:
    double* array;
    int size;

public:
    Vector();
    Vector(int n);
    Vector(const double* arr, int n);
    Vector(const Vector& other);
    Vector(Vector&& other);
    ~Vector();

    double& operator[](int index);
    Vector& operator=(const Vector& other);
    Vector& operator=(Vector&& other);

    friend std::ostream& operator<<(std::ostream& out, const Vector& vec);
    friend std::istream& operator>>(std::istream& in, Vector& vec);

    Vector operator+(const Vector& other) const;
};

#endif

