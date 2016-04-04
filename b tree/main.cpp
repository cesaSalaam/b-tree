//
//  main.cpp
//  b tree
//
//  Created by Lifoma Salaam on 4/4/16.
//  Copyright © 2016 CesaSalaam. All rights reserved.
//
#include <cstdlib>
#include <string>
#include <iostream>
#include <time.h>
#include "class.h"

using namespace std;


int main(int argc, char** argv)
{
    clock_t t1,t2;
    t1=clock();
    BTree t(3); // A B-Tree with minium degree 3
    for (int i = 1; i <= 1000000; i++) {
        t.insert(i);
    }

    for (int i = 1; i <= 100000; i++) {
            t.Remove(i);
        }
   
    t2=clock();
    float diff ((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;

    cout<<"This program took: "<<seconds<<"second to insert integer from 1 to 1,000,000 and to delete from 1 to 500,000"<<endl;
    system ("pause");
    
    return 0;
}
