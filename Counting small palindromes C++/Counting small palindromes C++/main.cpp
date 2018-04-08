//
//  main.cpp
//  Counting small palindromes C++
//
//  Created by Ege Şenkul on 8.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
using namespace std;
int inverse(int n){
    int reverse=0;
    while (n!=0) {
        reverse=reverse*10+n%10;
        n/=10;
    }
    return reverse;
}


int main() {
    int x,y;
    cin >> x;
    for (y=0; y<x; y++) {
        int a,b,c,d=0;
        cin >> a >> b;
        if (a>=1 && b<=100000) {
            for (c=a; c<=b; c++) {
                if (inverse(c)==c) {
                    d++;
                }
            }
            cout << d << endl;
        }
        }
            return 0;
}
