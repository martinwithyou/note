//
//  main.c
//  test_a12
//
//  Created by dezhu on 2021/12/28.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char p1[10]="decade";
    char p2[10]="decade";
    printf("%d/n",strcmp(p1,p2));
    
    char p3[]="decade";
    char p4[10];
    strcpy(p3,p4);
    printf("%s",p4);
    
    char p5[20]="hello";
    char p6[]="wwwww";
    strcat(p5,p6);
    printf("%s",p5);
    system("pause");
    return 0;
}
