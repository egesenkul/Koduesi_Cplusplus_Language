//
//  main.cpp
//  Base Conversion
//
//  Created by Ege Şenkul on 30.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include<iostream>
using namespace std;
int h=0;
void base(int num,int a)
{
    int rem=0;
    
    if (num <= 1)
    {
        cout << num;
        return;
    }
    rem = (num % a);
    
    base(num / a,a);
    
        cout << rem;
        
    }


int main()
{
    int x,y;
    cin >> y;
    for (x=0; x<y; x++) {
        int dec,b;
        cin >> dec >> b;
        if (b>=2 && b<=9) {
            base(dec,b);
            cout << endl;
        }
    }
    return 0;
}