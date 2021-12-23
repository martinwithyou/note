//
//  main.c
//  test_a
//
//  Created by dezhu on 2021/12/23.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
int main() {
    // insert code here...
    int i,j;
    int x=10;
    int y=8;
    char c;
    while(1){
        system("cls");
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                printf(" ");
            }
            printf("|\n");
        }
        for(j=0;j<y;j++){
            printf(" ");
        }
        printf("@\n");
    }
    //c = getch();
    if(c=='w')
        x--;
    if(c=='s')
        x++;
    if(c=='a')
        y--;
    if(c=='d')
        y++;
    
    return 0;
}
