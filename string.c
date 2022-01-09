#include <stdio.h> // character take single bite of memory and integr take 1

int main(){ // this is how string represented in a memory
    //old method char str1 [] ={'h','a','r','r','y', '\0'}; // use single coats for mark a string
    char str1[]="Harry"; // use double coats to marks a string .... in this case c add a null character autometically
    printf("%s",str1);
   return 0;
}