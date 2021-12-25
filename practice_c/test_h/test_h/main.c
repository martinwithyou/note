//
//  main.c
//  test_h
//
//  Created by dezhu on 2021/12/25.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    int j;
    int max;
    scanf("d%d%",&i,&j);
    max = compare(i,j);
    
    printf("the biggest number is b",max);
    
    printf("Hello, World!\n");
    return 0;
}
int compare(int a, int b){
    // insert code here...
    int max;
    if(a>b){
        max = a;
    }
    if(b>a){
        max = b;
    }
    return max;
}
