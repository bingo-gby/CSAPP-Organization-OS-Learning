#include<iostream>
using namespace std;

void sum_rowsl(double *A, double *B, long n) {
    for (long i = 0; i < n; i++) {
        for (long j = 0; j < n; j++) {
            B[i] += A[i*n+j];
        }
    }
}