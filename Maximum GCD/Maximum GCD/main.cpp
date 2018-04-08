//
//  main.cpp
//  Maximum GCD
//
//  Created by Ege Şenkul on 31.05.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin >> x;
    for (y=0; y<x; y++) {
        int m,i;
        int num;
        cin >> num;
        int numbers[num];
        for (i=0; i<num; i++) {
            cin >> numbers[i];
        }
        int max1,max2,max3=0,k,j;
        for (k=0; k<num-1; k++) {
            for (j=k+1; j<num; j++) {
                if(numbers[k]>numbers[j]){
                    m=numbers[j];}
                else{
                    m=numbers[k];}
                
                for(i=m;i>=1;i--){
                    if(numbers[k]%i==0 && numbers[j]%i==0 && max3<=i){
                            max1= numbers[k];
                            max2= numbers[j];
                            max3= i;
                    }
                }
            }
        }
        cout << max1 << ' ' << max2 << ' ' << max3 << endl;
    }
    
        return 0;
}

/*

Maximum GCD
 
 #include<stdio.h>
 
 int main(){
 
 ;
 
 printf("Insert any two number: ");
 
 scanf("%d%d",&x,&y);
  return 0;
 }

*/