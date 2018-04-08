//
//  main.cpp
//  Word Sorter
//
//  Created by Ege Şenkul on 30.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
string name[1001],t,a;
    getline(cin, a);
    int i,b=0,c=0;
    for (i=0; i<a.length(); i++) {
        if (a[i]==' ') {
            name[c]=a.substr(b,i);
            c++;
            b=i+1;
        }
    }
    
    int n=c+1;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(name[i] > name[j])
            { t = name[i];
            name[i] = name[j];
                name[j] = t;}}}
    
    for (i=0; i<n; i++) {
        cout << name[i] << ' ';
    }
            return 0;
}