//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i;

    for(i=100;i<=500;i=i+2) {
        if(i%2==0)
            printf("%d \n",i);
    }
    return 0;
}