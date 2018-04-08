//
//  main.cpp
//  Difference (IUBO15, Semi Final 2, A)
//
//  Created by Ege Şenkul on 31.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

/*

#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin >> x;
    for (y=0; y<x; y++) {
        int a;
        cin >> a;
        int a1,a2,a3,a4,b=a,sum=0;
        while (b!=0) {
            sum=sum+b%10;
            b/=10;
        }
        a1=(a/1000)%10;
        a2=(a/100)%10;
        a3=(a/10)%10;
        a4=a%10;
        cout << (a1*a2*a3*a4)-sum << endl;
    }
    return 0;
}
*/


#include <iostream>
using namespace std;

int main(){
int x,y;
    cin >> x;
    for(y=0;y<x;y++)
    {
        int a,b,c;
        cin >> a >> b >> c;
    if(a<10 && b<10 && c<10)
    {cout << "0" << a << ":0" << b << ":0" << c;
    }
    else if(a<10 && b<10 &&c>9){
        cout << "0" << a << ":0" << b << ":" << c;
    }
    else if(a<10 && b>9 &&c<10){
        cout << "0" << a << ":" << b << ":0" << c;
    }
    else if(a<10 && b>9 &&c>9){
        cout << "0" << a << ":" << b << ":" << c;
    }
    else if(a>9 && b<10 &&c<10){
        cout << a << ":0" << b << ":0" << c;
    }
    else if(a>9 && b<10 &&c>9){
        cout << a << ":0" << b << ":" << c;
    }
    else if(a>9 && b>9 &&c<10){
        cout << a << ":" << b << ":0" << c;
    }
    else if(a>9 && b>9 &&c>9){
        cout << a << ":" << b << ":" << c;
    }
        cout << endl;
    }}
