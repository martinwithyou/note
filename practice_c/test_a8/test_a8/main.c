//
//  main.c
//  test_a8
//
//  Created by dezhu on 2021/12/28.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    struct date{
        int year;
        int month;
        int day;
    };
    struct date today;
    today.year = 2020;
    today.month = 04;
    today.day = 20;
    printf("%i.%i.%i",today.year,today.month,today.day);
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
