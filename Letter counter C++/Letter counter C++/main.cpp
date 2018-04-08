//
//  main.cpp
//  Letter counter C++
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
        string skip,s;
        cin >> skip;
        getline(cin,s);
        int a,b=0;
        for (a=2; a<s.length(); a++) {
            char k=s[0]; cout << k;
            if (s[a]==s[1]) {
                b++;
                cout << s[1] << s[a] << endl;
            }
        }
        cout << b << endl;
    }
    return 0;
}
