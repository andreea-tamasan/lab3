//
// Created by Home on 08.03.2022.
//

#ifndef LAB3_CONSOLA_H
#define LAB3_CONSOLA_H
/// citeste un vector de la tastatura
/// \param l - lungimea vectorului
/// \param v - vectorul dorit
void readVector(int &l, int *v);

/// afiseaza un vector
/// \param l - lungimea vectorului
/// \param v - vector de afisat
void printVector(int l, int *v);

/// afiseaza un vector dintr-un interval dat
/// \param v - vectorul
/// \param start - capatul inferior al intervalului
/// \param end - capatul superior al intervalului
void sequence(int *v, int start, int end);

void Options();

/// deruleaza programul
/// \param v - vectorul cu care se lucreaza
void runMenu(int *v);
#endif //LAB3_CONSOLA_H
