//
//  main.c
//  test_d
//
//  Created by dezhu on 2021/12/23.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char i;
    double u = 0.7;
    double e = 0.5;
    double money;
    double exchange;
    printf("input what you want(u means uk, a means america)");
    scanf("%c",&i);
    if(i=='u'){
        exchange=u;
    }
    if(i=='e'){
        exchange=e;
    }
    printf("please input number of money...\n");
    
    scanf("%lf", &money);
    
    money = money * exchange;
    
    printf("this is a number of money", money);
    return 0;
}
