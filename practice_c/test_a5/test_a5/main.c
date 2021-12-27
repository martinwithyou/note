//
//  main.c
//  test_a5
//
//  Created by dezhu on 2021/12/27.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char read[10] = {'n','i','c','e'};
    int i;
    for(i=0;i<10;i++){
        printf("%c",read[i]);
    }
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
