#include <stdio.h>

int main(){
   // 97-122 = a-z lowercase ASCII VALUE
   char ch;
   printf("enter the character\n");
   scanf("%c",&ch);
   if (ch<=122 && ch>=97)
   {
      printf("it is lowercase");
   }
   else{
      printf("its not a lowercase");
   }
   return 0;
}