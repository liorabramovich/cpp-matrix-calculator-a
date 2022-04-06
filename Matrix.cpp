#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "vector"
#include "Matrix.hpp"

using namespace std;
using namespace zich;

Matrix::Matrix(vector<double> mymat, int rows, int cols)
{
}

Matrix Matrix::operator+()
{
    return *this;
}

void Matrix::operator++()
{
}

void Matrix::operator+=(const Matrix &)
{
}

Matrix Matrix::operator+(const Matrix &)
{
    return *this;
}

Matrix Matrix::operator-()
{
    return *this;
}

void Matrix::operator-=(const Matrix &)
{
}

Matrix Matrix::operator-(const Matrix &)
{
    return *this;
}

void Matrix::operator--()
{
}

bool Matrix::operator==(const Matrix &)
{
    return true;
}

bool Matrix::operator!=(const Matrix &)
{
    return true;
}

bool Matrix::operator>=(const Matrix &)
{
    return true;
}

bool Matrix::operator<=(const Matrix &)
{
    return true;
}

bool Matrix::operator>(const Matrix &)
{
    return true;
}

bool Matrix::operator<(const Matrix &)
{
    return true;
}

Matrix Matrix::operator*(const Matrix &)
{
    return *this;
}

Matrix Matrix::operator*=(double num)
{
    return *this;
}
Matrix Matrix::operator*=(const Matrix &)
{
    return *this;
}

namespace zich
{

    ostream &operator<<(ostream &o, const Matrix &mat)
    {
        return o;
    }

    istream &operator>>(istream &i, const Matrix &mat)
    {
        return i;
    }

    Matrix operator*(double d, const Matrix &mat1)
    {
        vector<double> mymat;
        int row = 1;
        int col = 1;

        return Matrix(mymat, row, col);
    }

}
