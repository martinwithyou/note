//
//  main.c
//  test_x
//
//  Created by dezhu on 2021/12/27.
//  Copyright © 2021年 dezhu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int read[5];
    int i=0;
    int x=0;
    int b=2;
    int c=0;
    while(x!=-1){
        scanf("%d",&x);
        read[i]=x;
        i++;
        for(i=0;i<=10;i++){
            if(read[i]==2){
                printf("%d是质数",read[i]);
                continue;
            }
            if(read[i]==1){
                printf("%d不是质数",read[i]);
                continue;
            }
            for(b=2;b<read[i];b++){
                if(read[i]%b==0){
                  c=1;
                }
                break;
            }
            if(c==0){
                printf("%d是质数",read[i]);
            }else{
                printf("%d不是质数",read[i]);
            }
            c=0;
        }
    }
    system("pause");
    return 0;
}
