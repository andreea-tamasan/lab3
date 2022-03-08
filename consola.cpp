//
// Created by Home on 01.03.2022.
//
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

void Options(){
    std::cout << std::endl << "1.Cititi lista de numere."<<std:: endl;
    std::cout << "2.Afisati lista de numere intregi."<<std:: endl;
    std::cout << "x.Inchideti aplicatie."<<std::endl;
}