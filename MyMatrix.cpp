//
// Created by amer0 on 9/28/2017.
//
#include<iostream>
#include<string>
#include "MyMatrix.h"
using namespace std;


MyMatrix::MyMatrix() {

    //Intialize the values for the default constructor
    this->rows = 0;
    this->cols = 0;
    this->m = nullptr;
}

MyMatrix::MyMatrix(int rows, int cols) {

    //Copying the row & column value
    this->rows = rows;
    this->cols = cols;


    //initialize matrix
    this->m = new int *[rows];
    for (int i = 0; i <= rows; i++) {
        m[i] = new int[cols];
    }

    // Inserting the values
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; i <= cols; j++) {
            m[i][j] = 0;
        }

    }
}

    MyMatrix::MyMatrix(int rows, int cols, string num)
    {
        //Copying the row & column value
        this->rows = rows;
        this->cols = cols;

        //Check user input whether it is one or random numbers
        if(num == "allOne")
        {
            //Create memory block for the matrix
            this->m = new int *[rows];
            for (int i = 0; i <= rows; i++) {
                this->m[i] = new int[cols];
            }
            //Insert values
            for (int i = 0; i <= rows; i++) {
                for (int j = 0; i <= cols; j++) {
                    this->m[i][j] = 1;
                }

            }
        }

        else if(num == "Random")
        {
            //Creating memory block for the matrix
            this->m = new int *[rows];
            for (int i = 0; i <= rows; i++) {
                this->m[i] = new int[cols];
            }

            //copying the values
            for (int i = 0; i <= rows; i++) {
                for (int j = 0; i <= cols; j++) {
                    this->m[i][j] = rand() % 100;
                }

            }
        }
            //default is to return a zero matrix
        else{
            this->m = new int *[rows];
            for (int i = 0; i <= rows; i++) {
                this->m[i] = new int[cols];
            }

            for (int i = 0; i <= rows; i++) {
                for (int j = 0; i <= cols; j++) {
                    this->m[i][j] = 0;
                }

            }
        }
    }


friend std::ostream& MyMatrix::operator <<(std::ostream &out, const MyMatrix &other) {
    //for loop to print the values
    for(int i=0; i<=other.rows; i++)
    {
        cout<<endl;
        for(int j=0; j<=other.cols; j++)
        {
            out<<"\t"<<other.m[i][j];
            out<<"\n";
        }
    }

    return out;
}


MyMatrix MyMatrix::operator+(MyMatrix &other)
{


    //addition the matrix have to be of the same size
    if(this->rows == other.rows && this->cols == other.cols)
    {
        MyMatrix result(this->rows, this->cols);

        //add the values of two matrix and save it in result
        for(int i=0; i<=rows; i++)
        {
            for(int j=0;j<=cols; j++)
            {
                result.m[i][j] = this->m[i][j] + other.m[i][j];
            }
        }

    }

    else{
        cout<<"Oops the two matrix are not of the same size!"<<endl;
    }
}

MyMatrix MyMatrix::operator-(MyMatrix &other){


        //addition the matrix have to be of the same size
        if(this->rows == other.rows && this->cols == other.cols)
        {
            MyMatrix result(this->rows, this->cols);

            //subtract the values of two matrix and save it in result
            for(int i=0; i<=rows; i++)
            {
                for(int j=0;j<=cols; j++)
                {
                    result.m[i][j] = this->m[i][j] - other.m[i][j];
                }
            }

        }
        //Error checking and returning
        else{
            cout<<"Oops the two matrix are not of the same size!"<<endl;
        }
    }



MyMatrix &MyMatrix::operator=(MyMatrix &other){

    //creating same matrix to copy the values
    this->rows = other.rows;
    this->cols = other.cols;

    //create the matrix using the constructor
    this->m = new int *[this->rows];
    for (int i = 0; i <= this->rows; i++) {
        m[i] = new int[this->cols];
    }

    // Inserting the values
    for (int i = 0; i <= this->rows; i++) {
        for (int j = 0; i <= this->cols; j++) {
            this->m[i][j] = other.m[i][j];
        }

    }

    return *this;
}


MyMatrix MyMatrix::operator*(MyMatrix &other)
{
    //Find the center value of the matrix
    for(int i=0; i<=this->rows;);
}