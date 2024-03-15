#include <stdio.h>

int strlenPonteiro(char *str){
    
    char *s = str;

    while(*s != '\0'){
        s++;
    }
    return (s - str);
}

void main(){
    char string[3] = {'o', 'i', '\0'};

    strlenPonteiro(&string[0]);
}