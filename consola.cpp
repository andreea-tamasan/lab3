//
// Created by Home on 01.03.2022.
//
#include "problem.h"
#include <iostream>
using namespace std;

void readVector(int &l, int *v){
    int i,value;
    cout << "nr elements = ";
    cin >> l;
    for(i = 0; i < l; i++){
        cin >> value;
        *(v + i) = value;
    }
}

void printVector(int l, int *v){
    int i;
    for(i = 0; i < l; i++)
        cout << *(v+i)<< " ";
    cout<<endl;
}

void sequence(int *v, int start, int end)
{
    for(int i = start; i<= end; i++)
        cout<<*(v+i)<<" ";
    cout<<endl;
}

void Options(){
    std::cout << std::endl << "1.Cititi lista de numere."<<std:: endl;
    std::cout << "2.Afisati lista de numere intregi."<<std:: endl;
    std::cout << "3.Afisarea pe consola a celei mai lungi secvente de numere prime."<<std::endl;
    std::cout << "4.Afisarea pe consola a celei mai lungi secvente cu numere din intervalul [x,y]. "<<std::endl;
    std::cout << "x.Inchideti aplicatie."<<std::endl;
}

void runMenu(int *v){
    int ok = 1,l;
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
            case '3':{
                int start,end;
                prime_sequence(v,l,start,end);
                sequence(v,start,end);
                break;
            }
            case '4': {
                int x, y, start, end;
                std::cout << "capat inferior interval(x)= ";
                std::cin >> x;
                std::cout << std::endl;
                std::cout << "capat superior interval(y)= ";
                std::cin >> y;
                interval_sequence(v, l, start, end, x, y);
                sequence(v, start, end-1);
                break;
            }
            case 'x':
                ok = 0;
                break;
            default:
                std::cout<<"Try again!"<< std:: endl;
        }
    }
}