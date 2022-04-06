#include <iostream>
#include "vector"
namespace zich
{

    class Matrix
    {
    private:
        std::vector<std::vector<double>> MyMatrix;

    public:
        Matrix(std::vector<double>, int rows, int cols);

        Matrix operator+();
        void operator+=(const Matrix &);
        Matrix operator+(const Matrix &);
        void operator++();

        Matrix operator-();
        void operator-=(const Matrix &);
        Matrix operator-(const Matrix &);
        void operator--();

        bool operator==(const Matrix &);
        bool operator!=(const Matrix &);
        bool operator<=(const Matrix &);
        bool operator>=(const Matrix &);
        bool operator>(const Matrix &);
        bool operator<(const Matrix &);

        Matrix operator*(const Matrix &);
        Matrix operator*=(double);
        Matrix operator*=(const Matrix &);

        friend Matrix operator*(double, const Matrix &);
        friend std::ostream &operator<<(std::ostream &o, const Matrix &);
        friend std::istream &operator>>(std::istream &i, const Matrix &);
    };

}