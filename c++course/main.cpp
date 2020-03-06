//
//  main.cpp
//  c++course
//
//  Created by CesarAdan1 on 2/28/20.
//  Copyright © 2020 CesarAdan1. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n1, n2;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    float division = 0;
    // insert code here...
    cout << "Digita un número: "; cin>>n1;
    cout << "Digita otro número: "; cin>>n2;
    
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1/n2;
    
    cout <<"\nEl resultado de la suma es " <<suma<<endl;
    cout <<"El resultado de la resta es " <<resta<<endl;
    cout <<"El resultado de la multiplicación es " <<multiplicacion<<endl;
    cout <<"El resultado de la división es " <<division<<endl;
    
    return 0;
}
