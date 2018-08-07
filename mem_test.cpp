//
//  main.cpp
//  testing new
//
//  Created by Kyra Thompson on 8/1/18.
//  Copyright © 2018 Kyra Thompson. All rights reserved.
//

#include <iostream>
#include "std_lib_facilities.h"
int main() {
    int i = 0;
    while(true){
        double* dptr = new double[10000];
        cout << "Loop " << i << endl;
        cout << "dptr[0]= " << dptr[0] << endl;
        i++;
    }
    return 0;
}
