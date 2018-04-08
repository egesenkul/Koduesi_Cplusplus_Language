//
//  main.cpp
//  Palindrome substrings
//
//  Created by Ege Şenkul on 31.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

bool isPal(string s) {
    int n = s.length();
    for(int i = 0; i < n/2; i++)
        if(s[i] != s[n-i-1]) return false; return true;
}

int main() {
    string list[100];
    string a,b;
    int i,j,k=0;
    getline(cin,a);
    for (i=0; i<a.length()-1; i++) {
        for (j=i+1; j<a.length(); j++) {
            if(isPal(a.substr(i,j)))
            {list[k]=a.substr(i,j);
                k++;
            }
        }
    }
    string temp;
    for (i=0; i<k; i++) {
        for (j=i+1; j<=k; j++) {
            if (list[i]>list[j]) {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    cout << k << ' ';
    for (i=0; i<k; i++) {
        cout << list[i] << ' ';
    }
    
    return 0;
}
