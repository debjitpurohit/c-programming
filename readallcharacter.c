#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("samplefgetcputcfile.txt", "r");
    char ch;
    while (ch != EOF)
    {
        ch = fgetc(ptr);
        if (ch != EOF)
            printf("the value of ptr is %c\n", ch);
    }

    //  printf("the value of ptr is %c\n",ch);
    //  ch =fgetc(ptr);
    //  printf("the value of ptr is %c\n",ch);
    //  ch =fgetc(ptr);
    //  printf("the value of ptr is %c\n",ch);
    //  ch =fgetc(ptr);
    //  printf("the value of ptr is %c\n",ch);
    //  ch =fgetc(ptr);
    //  printf("the value of ptr is %c\n",ch);
    fclose(ptr);

    return 0;
}