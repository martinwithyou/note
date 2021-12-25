//
//  main.c
//  test_r
//
//  Created by dezhu on 2021/12/25.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    struct date{
        int year;
        int month;
        int day;
    };
    struct date today;
    today.year=2020;
    today.month=04;
    today.day=20;
    printf("%i%i%i",today.year,today.month,today.day);
    printf("Hello, World!/n");
    return 0;
}
