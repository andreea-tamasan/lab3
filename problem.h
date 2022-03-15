//
// Created by Home on 15.03.2022.
//

#ifndef LAB3_PROBLEM_H
#define LAB3_PROBLEM_H
/// verifica daca un numar este prim
/// \param n - numarul de verificat
/// \return true daca n e prim,false altfel
bool isPrime(int n);

/// determina inceputul si sfarsitul unui subsir cu prorietatea ca subsirul contine doar el prime
/// \param v - vector
/// \param l - lungimea vectorului
/// \param start - pozitia de inceput a subsirului
/// \param end - pozitia de final a subsirului
/// \return -
void prime_sequence(int *v, int l,int &start,int &end);

bool asc(int poz1, int poz2, int *a);
void sequence_asc(int a[], int n, int &start, int &end);

/// determina numerele aflate intr-un interval de numere citite de la tastatura
/// \param a - vectorul pentru care se aplica proprietatea dorita
/// \param n - lungimea vectorului
/// \param start - pozitia de inceput a subsecventei
/// \param end - pozitia de final a subsecventei
/// \param x - valoare citita pentru capatul inferior al intervalului
/// \param y - valoare citita pentru capatul superior al intervalului
void interval_sequence(int *a, int n, int & start, int & end, int x, int y);

#endif //LAB3_PROBLEM_H
