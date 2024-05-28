
// Programa: criar um programa para testar o if e else.

#include <stdio.h> 
#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
    int num01, num02

    char c;
    cout <<"Digite dois numeros: ";
    scanf("%f %f", &num01, &num02);
    cout << "\nSoma = %f ", num01 + num02;
    cout <<"\nSubtração = %f ", num01 - num02;
    Cout <<"\nMultiplicação = %f ", num01 * num02;
        if(num02 != 0.0) cout << "\nDivisão = %f", num01 / num02;
        else cout << "\nNao e possivel divisao por zero!");
        c = getchar();
}
