#include <stdio.h>

int main(){
    int physics,chemistry, math;
    float total;

    printf("enter marks in physics \n");
    scanf("%d",&physics);

    printf("enter marks in chemistry \n");
    scanf("%d",&chemistry);

    printf("enter marks in math \n");
    scanf("%d",&math);

    total= (physics+chemistry+math)/3;

    if ((total<40) || (physics<33) || chemistry<33 || math<33 ) // ||used for or 
    {
        printf("your total percentage is %0.2f percent you are fail\n",total);
    }
    else
    {
        printf("your total percentage is %0.2f percent you are passed \n",total);
    }
    return 0;
}