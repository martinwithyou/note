//
//  main.c
//  test_v
//
//  Created by dezhu on 2021/12/26.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
void updatewithpeople();
void updatewithoutpeople();
void start();
void show();
void gameover();
int main(int argc, const char * argv[]) {
    // insert code here...
    start();
    while(1){
        updatewithpeople();
        updatewithoutpeople();
        show();
    }
    printf("Hello, World!\n");
    return 0;
}
void updatewithpeople(){};
void updatewithoutpeople(){};
void star(){};
void show(){};
void gameover(){};
