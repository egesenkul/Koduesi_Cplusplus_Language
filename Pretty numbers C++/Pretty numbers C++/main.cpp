//
//  main.cpp
//  Pretty numbers C++
//
//  Created by Ege Şenkul on 8.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int test, n;
    cin >> n;
    for (test=0; test<n; test++) {
        int number;
        cin >> number;
        int number2=number;
        int sum=0;
        while (number!=0) {
            sum=sum+number%10;
            number/=10;
        }
        if (sum%(number2%10)==0) {
            cout << "po" << endl;
        }
        else cout << "jo" << endl;
    }
    return 0;
}
