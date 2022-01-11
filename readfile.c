#include <stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("samplefile.txt","r");
    // char ch;
    // fscanf(ptr, "%c" ,&ch);
    // printf("the character ch is %c",ch);.
    int i;
    fscanf(ptr, "%d",&i);
    printf("the number is %d",i);
    fclose(ptr);
  
   return 0;
}