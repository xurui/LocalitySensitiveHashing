//
//  main.cpp
//  LSH_demo
//
//  Created by XuRui on 15-5-2.
//  Copyright (c) 2015年 XuRui. All rights reserved.
//

#include <iostream>
#include "LocalitySensitiveHashing.h"

using namespace std;

int main(int argc, const char * argv[]) {
    int L = 0;
    int K = 0;
    double w = 0;
    int D = 0;
    string LSH_file = "LSH_file.yml";
    LocalitySensitiveHashing LSH;
    cout << "input tuples number(L), LSH functions per tuple(K), dimension(D), uniform distribution parameter(w): " << endl;
    cout << "L: ";
    cin >> L;
    cout << "K: ";
    cin >> K;
    cout << "w: ";
    cin >> w;
    cout << "D: ";
    cin >> D;
    LSH.initialLSHFunction(L, K, w, D, LSH_file);
    cout << "LSHfunctions have been writern in LSH_file.yml/.xml" << endl;
    return 0;
}
