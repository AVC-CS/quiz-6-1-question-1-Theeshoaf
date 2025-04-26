
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
#include <iostream>
#include <cmath>
using namespace std;

void getTwoValues(int &begin, int &end);
int getNextPrime(int start);
int getPrevPrime(int end);
bool isPrime(int n);

bool isPrime(int n){
    if (n<2){
        return false;
    }
    for (int i=2; i<sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void getTwoValues(int &begin, int &end){
    do{
        cout <<"Enter 2 intergers";
        cin >> begin >> end;
    }
    while (begin >= end);
}

int getNextPrime(int start){
    int n = (start + 1);
    while (true){
        if (isPrime(n))}{
            return n;
        }
        n++;
    }
}

int getPrevPrime(int end){
    int n = (end - 1);
    while (n>1){
        if (isPrime(n)){
            return n;
        }
        n--;
    }
    return -1;
}