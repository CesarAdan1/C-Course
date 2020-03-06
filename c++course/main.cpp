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
    
    int num1 = 0, num2 = 0;
    
    cout<<"Introduce un numero: "; cin>>num1;
    cout<<"Introduce otro número: "; cin>>num2;
    
    if(num1 > num2){
        cout<<"El número mayor es: "<<num1<<endl;
    } else {
        cout<<"El numero mayor es: "<<num2<<endl;
    }
    
    return 0;
}
