//
//  main.cpp
//  Three Numbers C++
//
//  Created by Ege Şenkul on 9.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a,b,c,max,min,center;
    while (a!=0 || b!=0 || c!=0) {
        cin >> a >> b >> c;
        if (a>b) {
            if (c>a) {
                max=c;
                center=a;
                min=b;
            } else {
                if (c>b) {
                    max=a;
                    center=c;
                    min=b;
                } else {
                    max=a;
                    center=b;
                    min=c;
                }
            }
        } else {
            if (c>b) {
                max=c;
                center=b;
                min=a;
            } else {
                if (c>a) {
                    max=b;
                    center=c;
                    min=a;
                } else {
                    max=b;
                    center=a;
                    min=c;
                }
            }
        }
        if (a!=0 || b!=0 || c!=0) {
            cout << min << ' ' << center << ' ' << max << "\n";
        }
    }
    return 0;
}