//
//  main.c
//  test_e
//
//  Created by dezhu on 2021/12/23.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int money;
    float all;
    int number;
    printf("一元为1，五角为2，一角为3");
    scanf("%d", &money);
    printf("please input mount of money");
    scanf("%d", &number);
    if(money==1)
        all = 1* number;
    if(money==2)
        all = 0.5 * number;
    if(money ==3)
        all = 0.1 * number;
    if(all>2)
        printf("have a good trip");
    else
        printf("sorry, not enough money");
    printf("Hello, World!\n");
    return 0;
}
