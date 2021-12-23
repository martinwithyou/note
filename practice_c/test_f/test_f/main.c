//
//  main.c
//  test_f
//
//  Created by dezhu on 2021/12/23.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=10;
    int b=5;
    printf("%d",(b=a));
    printf("\n");
    printf("%d",(b=a)*-b);
    printf("\n");
    printf("%d",10-(b=a)*-b);
    printf("\n");
    return 0;
}
