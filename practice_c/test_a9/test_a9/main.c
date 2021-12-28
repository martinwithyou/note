//
//  main.c
//  test_a9
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
    struct date days[3]={
        {2020,04,20},
        {2020,05,20},
        {2020,06,20}
    };
    printf("%i.%i.%i",days[2]);
    system("pause");
    printf("Hello, World!\n");
    return 0;
}
