//
//  main.c
//  test_a1
//
//  Created by dezhu on 2021/12/27.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void change(int *p){
    *p=10;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    printf("%p\n",&a);
    
    int b=5;
    change(&b);
    printf("%d\n",&b);
    
    printf("Hello, World!\n");
    return 0;
}
