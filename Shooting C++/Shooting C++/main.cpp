//
//  main.cpp
//  Shooting C++
//
//  Created by Ege Şenkul on 8.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,f,g;
    int sum;
    for (a=0; a<7; a++) {
        for (b=0; b<6; b++) {
            for (c=0; c<5; c++) {
                for (d=0; d<5; d++) {
                    for (e=0; e<3; e++) {
                        for (f=0; f<3; f++) {
                            sum=(f*40)+(e*39)+(d*23)+(c*22)+(b*17)+(a*16);
                            if (sum==100) {
                                g++;
                            };
                        }
                    }
                }
            }
        }
    }
    cout << g;
    return 0;
}
