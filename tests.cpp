//
// Created by Home on 15.03.2022.
//

#include "tests.h"
#include "assert.h"
#include "problem.h"

void TestPrimeSequence() {
    int start, end;
    int l = 5;
    int *a = new int[5]{1, 6, 5, 7, 8};
    prime_sequence(a, l, start, end);
    assert(start == 2);
    assert(a[2] == 5);
    assert(a[3] == 7);
}

void TestNumbersInInterval() {
    int start, end, x, y;
    x = 1;
    y = 4;
    int n = 5;
    int *a = new int[5]{1, 2, 4, 6, 4};
    interval_sequence(a, n, start, end, x, y);
    assert(start == 0);
    assert(end == 3);
    assert(a[0] == 1);
    assert(a[2] == 4);
}