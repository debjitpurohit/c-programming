#include <stdio.h>

int main(){ // 2 classes and 4 students
    //int marks[2][4] ;// 2(0,1) in row and 4(0,1,2,3) in column
    //marks[0][0]=98; // 1st row 1st column // in case of arrays 0 is 1st column
    //marks[0][1]=93; // 1st row 2nd column
    //marks[0][2]=99; // 1st row 3rd column
    //marks[0][3]=100; // 1st row 4 th column

    //marks[1][0]=38; // 2st row 1st  column
    //marks[1][1]=53; // 2st row 2st  column
    //marks[1][2]=69; // 2st row 3st  column
    //marks[1][3]=76; // 2st row 4st  column
    int marks[2][4]={  //0  1  2  3
                    /*0*/ {98,93,99,100},
                    /*1*/ {38,53,69,76},
                    };
    for (int i=0; i<2;i++) //rows
    {
        for(int j=0; j<4; j++) // column
        {
           printf("%d ", marks[i][j]);
        }
        printf("\n"); // jehetu we want to print number in another row so we have to use \n in for loop of rows
    }
    return 0;
}