/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : [Ȳ�¾�]
Created          : 26-03-2018
Modified         : 19-09-2021
Language/ver     : C++ in MSVS2019

Description      : myNM.h
----------------------------------------------------------------*/

#ifndef		_MY_NM_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NM_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <math.h>


// Return the dy/dx results for the input data. (truncation error: O(h^2))
//�̺�
void gradient1D(double x[], double y[], double dydx[], int m);


//�̺� 3��
void gradient1D_3Point(double x[], double y[], double dydx[], int m);

void func_call(double func(const double x), double xin);

// Return the dy/dx results for the target equation. (truncation error: O(h^2))

void gradientFunc(double func(const double x), double x[], double dydx[], int m);

// ���� ���
void printVec(double* _vec, int _row);



// �簢�� ����
double IntegrateRect(double x[], double y[], int m);

// ��ٸ��� ����
double trapz(double x[], double y[], int m);

// ����13
double integral(double func(const double x), double a, double b, int N);


// ����38
double integral38(double func(const double x), double a, double b, int N);


//�̺� ������ modified
double ODE(double func(double x, double y), double _x[], double _y[]);

//gitgub ������
void displayArray(double xin[]);



#endif