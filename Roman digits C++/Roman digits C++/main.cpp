//
//  main.cpp
//  Roman digits C++
//
//  Created by Ege Şenkul on 8.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int x,y;
    cin >> x;
    for (y=0; y<x; y++) {
        int number;
        string s;
        cin >> number;
        s=to_string(number);
        int i;
        for (i=0; i<s.length() ; i++ ) {
            switch (s[i]) {
                case '0':
                    printf("O ");
                    break;
                case '1':
                    printf("I ");
                    break;
                case '2':
                    printf("II ");
                    break;
                case '3':
                    printf("III ");
                    break;
                case '4':
                    printf("IV ");
                    break;
                case '5':
                    printf("V ");
                    break;
                case '6':
                    printf("VI ");
                    break;
                case '7':
                    printf("VII ");
                    break;
                case '8':
                    printf("VIII ");
                    break;
                case '9':
                    printf("IX ");
                    break;
                    
            }
            
        }cout << endl;}
    return 0;
}
