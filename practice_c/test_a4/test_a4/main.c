//
//  main.c
//  test_a4
//
//  Created by dezhu on 2021/12/27.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int read[10] = {0,1,2,3,4,5,-1};
    int *p = read;
    while(*p!=-1){
        //printf("%d\n",*p++);
        printf("%p\n",*p++);
    }
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
