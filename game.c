#include <stdio.h>
#include <stdlib.h>

int main() {
    char A[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(i==0)
                A[i][j]=48+j;
            else if(j==0)
                A[i][j]=48+i;
            else
                A[i][j]='.';
    for(int i=0;i<4;i++){
        printf("\n");
        for(int j=0;j<4;j++)
            printf("%c  ",A[i][j]);
    }
}