//
//  main.cpp
//  MinMax Sum C++
//
//  Created by Ege Şenkul on 8.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin >> y;
    for (x=0; x<y; x++) {
        int a,b,c,min=1000000,max=-1000000;
        cin >> a;
        for (b=0; b<a; b++) {
            cin >> c;
            if (c>=max) {
                max=c;
            }
            if (c<=min) {
                min=c;
            }
        }
        cout << max+min << endl;
    }
    return 0;
}
