//
//  main.c
//  practice_c
//
//  Created by dezhu on 2021/12/23.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    // insert code here...
    int money10;
    int money5;
    int money1;
    float all;
    
    printf("please input number of money\n");
    printf("such as 1 1 5\n");
    printf("welcome\n");
    
    scanf("%d%d%d",&money10, &money5, &money1);
    all = 1 * money10 + 0.5 * money5 + 0.1 * money1;
    if(all > 2)
        printf("wlcome");
    else
        printf("sorry,not enough money");
    
    return 0;
}
