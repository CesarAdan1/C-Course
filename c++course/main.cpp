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
    
    float precio_producto = 0, precio_iva = 0;
    
    cout<< "Introduce el precio del producto: "; cin>>precio_producto;
    
    precio_iva = precio_producto*0.16;
    
    cout<< "El precio del producto con IVA es: "<<precio_iva<<endl;
    
    return 0;
}
