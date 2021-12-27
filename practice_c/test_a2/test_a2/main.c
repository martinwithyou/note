//
//  main.c
//  test_a2
//
//  Created by dezhu on 2021/12/27.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void change(int change[10]){
    change[0]=5;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int read[10]={0};
    change(read);
    printf("%d\n",read[0]);
    printf("%p\n",read[0]);
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
