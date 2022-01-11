#include <stdio.h>

int main(){
       FILE *ptr;
    // ptr= fopen("samplefgetcputcfile.txt","w");
    // fputc('c',ptr);
    // ptr= fopen("samplefgetcputcfile.txt","r");
    //  char ch =fgetc(ptr);
     ptr= fopen("samplefgetcputcfile.txt","r");
     char ch =fgetc(ptr);
     printf("the value of ptr is %c\n",ch);
     ch =fgetc(ptr);
     printf("the value of ptr is %c\n",ch);
     ch =fgetc(ptr);
     printf("the value of ptr is %c\n",ch);
     ch =fgetc(ptr);
     printf("the value of ptr is %c\n",ch);
     ch =fgetc(ptr);
     printf("the value of ptr is %c\n",ch);
    fclose(ptr);

  

   return 0;
}