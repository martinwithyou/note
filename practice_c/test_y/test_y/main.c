//
//  main.c
//  test_y
//
//  Created by dezhu on 2021/12/27.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int read[10][10]={0};
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d\n",read[i][j]);
        }
    }
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
