//
//  main.cpp
//  Pretty squares C++
//
//  Created by Ege Şenkul on 8.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
using namespace std;

int sumofdigits(int n){
    int sum=0,a;
    while (n!=0) {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}

int main() {
    int x,y;
    cin >> x;
    for (y=0; y<x; y++) {
        int a,b,c,d=0;
        cin >> a >> b;
        for (c=a; c<=b; c++) {
            if (sumofdigits(c)==sumofdigits(c*c)) {
                d++;
            }
        }
        cout << d << endl;
    }
    return 0;
}
