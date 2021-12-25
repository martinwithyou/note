//
//  main.c
//  test_t
//
//  Created by dezhu on 2021/12/25.
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
    struct days{
        struct date yesterday;
        struct date today;
        struct date tomorrow;
    };
    struct days one[2]={
        {{2020,04,19}},
        {{2020,04,01}}
    };
    printf("%i.%i.%i",one[1]);
    printf("\n");
    return 0;
}
