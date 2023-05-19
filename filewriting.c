#include <stdio.h>

int main() {
    FILE *fptr;
    fptr=fopen("name.c","w");
    if(fptr==NULL){
        printf("File doesnot exist \n");
    }
    else{
    fclose(fptr);
    }
    return 0;
}