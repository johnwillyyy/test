#include <stdio.h>
#include <stdlib.h>

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
            printf("%c  ",A[i][j]);
    }
}