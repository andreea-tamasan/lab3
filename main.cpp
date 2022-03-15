#include <iostream>
#include "consola.h"
#include "problem.h"
#include "tests.h"

int main(){
    TestPrimeSequence();
    TestNumbersInInterval();
    int* v= new int[100];
    runMenu(v);
    delete[] v;
}