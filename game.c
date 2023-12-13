#include <stdio.h>
#include <stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define RESET "\x1B[0m"
#define CYN   "\x1B[36m"


int main() {
    int n,m;
    scanf("%d*%d",&n,&m);
    char A[n+2][m+2];
    for(int i=0;i<n+2;i++)
        for(int j=0;j<m+2;j++)
            if(i==0)
                A[i][j]=48+j;
            else if(j==0)
                A[i][j]=48+i;
            else
                A[i][j]='.';
    for(int i=0;i<n+2;i++){
        printf("\n");
        for(int j=0;j<m+2;j++)
            printf(CYN"%c    "RESET,A[i][j]);
    }
}