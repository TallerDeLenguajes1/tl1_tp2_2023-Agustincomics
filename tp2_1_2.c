#include <stdio.h>
#include <stdlib.h>

int main(){
  /*   int Buff [5] = {5,15,30,10,35};
    int *p;
    p= Buff; 
    printf("posicion 0: %d \n", p[0]);
    p[0] = 7;
    printf("posicion 0: %d \n", p[0]); */

    #define N 20
    int i;
    double vt[N];
    double *p;
    p = vt;
    for(i = 0; i < N; i++)
    {
        p[i]=1+rand()%100;
        printf("%f\n", p[i]);
    }

    return 0;
}