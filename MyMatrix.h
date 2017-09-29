//
// Created by amer0 on 9/28/2017.
//





#ifndef LAB_SECTION3_TEST1_MYMATRIX_H
#define LAB_SECTION3_TEST1_MYMATRIX_H
#include<string>
#define size 20;

class MyMatrix {
public:
    int rows, cols;
    int **m;

public:

    MyMatrix();//Default constructor

    MyMatrix(int rows, int cols);

    MyMatrix(int rows, int cols, std::string num);

    MyMatrix operator+(MyMatrix &other);

    MyMatrix operator-(MyMatrix &other);

    MyMatrix operator*(MyMatrix &other);

    MyMatrix &operator=(const MyMatrix &other);

    friend std::ostream& operator<<(std::ostream& out, const MyMatrix &other);
};


#endif //LAB_SECTION3_TEST1_MYMATRIX_H
