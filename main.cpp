#include <iostream>
#include "consola.h"

int main(){
    int ok = 1,l;
    int* v= new int[100];
    char option;
    while(ok == 1)
    {
        Options();

        std::cout<<"Give option: ";
        std::cin >> option;
        switch (option)
        {
            case '1':
                readVector(l,v);
                break;
            case '2':
                printVector(l,v);
                break;
            case 'x':
                ok = 0;
                break;
            default:
                std::cout<<"Try again!"<< std:: endl;
        }
    }
    delete[] v;
}