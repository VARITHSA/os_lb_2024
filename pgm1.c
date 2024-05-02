#include <stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(){
    char ch;
    FILE *fptr1 = NULL , *fptr2 = NULL;
    fptr1 = fopen("C:\\Users\\Srivathsa\\OneDrive\\Desktop\\os\\abc.txt","r");
    if(fptr1 == NULL){
        printf("no file");
        exit(1);
    }
    fptr2 = fopen("C:\\Users\\Srivathsa\\OneDrive\\Desktop\\os\\dest.txt","w");
    if(fptr2 == NULL){
        printf("no file");
        exit(1);
    }
    while ((ch = fgetc(fptr1))!= EOF)
    {
        fputc(ch, fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("Copied successfully");
    
}