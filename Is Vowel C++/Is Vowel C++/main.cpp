//
//  main.cpp
//  Is Vowel C++
//
//  Created by Ege Şenkul on 8.06.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,i,v=0;
    cin >> b;
    for (a=0; a<b; a++) {
        string line,skip;
        cin >> skip;
        getline(cin, line);
        for(i=0;line[i]!='\0';i++)
        {if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U' || line[i]=='Y' || line[i]=='y' ){
            v++;
            cout << line[i];}}
        printf("%d\n",v);
        v=0;}
    return 0;
}