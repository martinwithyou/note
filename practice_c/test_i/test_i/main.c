//
//  main.c
//  test_i
//
//  Created by dezhu on 2021/12/25.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int i,j;
int x = 10;
int y = 8;
char c;
int k=0;
int number=5;
int arm=0;
int l=0;

void begin(){
    srand((unsigned)time( NULL ));
}
void withoutplayer(){
    system("cls");
    
    if(l==1){
        number=rand()%10;
        l=0;
    }
    
    if(arm==0){
        for(i=0;i<number;i++)
            printf(" ");
        printf("$\n");
    }
    
    if(k==0){
        for(i=0;i<x;i++)
            printf("\n");
    }
    if(k==1){
        for(i=0;i<x;i++){
            for(j=0;j<y;j++)
                printf("");
            printf("\n");
        }
        k=0;
        if(number==j){
            arm=0;
            l=1;
        }
    }
    
    for(j=0;j<y;j++){
        printf(" ");
    }
    
    printf("@\n");
}
void withplayer(){
    c = getch();
    if(c=='w')
        x--;
    if(c=='s')
        x++;
    if(c=='a')
        y--;
    if(c=='d')
        y++;
    if(c==' ')
        k=1;
}
void show(){
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    begin();
    while(1){
        withoutplayer();
        withplayer();
        show();
    }
    printf("Hello, World!\n");
    return 0;
}
