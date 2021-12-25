//
//  main.c
//  test_m
//
//  Created by dezhu on 2021/12/25.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
void change(int *p){
    *p=10;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 5;
    change(&a);
    printf("%d\n",a);
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
