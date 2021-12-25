//
//  main.c
//  test_o
//
//  Created by dezhu on 2021/12/25.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
void change(int change[10]){
    change[0]=5;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int read[10]={0};
    for(int i=0;i<10;i++){
        printf("%d\n",read[i]);
    }
    printf("=============\n");
    change(read);

    for(int i=0;i<10;i++){
        printf("%d\n",read[i]);
    }
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
