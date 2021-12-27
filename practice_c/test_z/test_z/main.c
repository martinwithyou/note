//
//  main.c
//  test_z
//
//  Created by dezhu on 2021/12/27.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    int b;
    int read[15][20]={0};
    for(a=0;a<20;a++){
        read[0][a]=-1;
        read[14][a]=-1;
    }
    for(a=0;a<15;a++){
        read[a][0]=-1;
        read[a][19]=-1;
    }
    for(a=0;a<15;a++){
        for(b=0;b<20;b++){
            if(read[a][b]==-1)
                printf("*");
            if(read[a][b]==0)
                printf(" ");
        }
        printf("\n");
    }
    printf("Hello, World!\n");
    return 0;
}
