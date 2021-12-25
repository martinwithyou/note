//
//  main.c
//  test_s
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
    struct date days[3]={
        {2020,3,4},
        {2020,03,21},
        {2020,8,9}
    };
    printf("%i.%i.%i",days[2]);
    return 0;
}
