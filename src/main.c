#include <stdio.h>
#include <string.h>
void shell(){
    system("/bin/bash");
}

void function1(char *str){
    char buffer[500];
    strcpy(buffer,str);
}

void main(int argc, char *argv[]){
    function1(argv[1]);
    printf("%s\n","Execution normally!");
}
