#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void){
    int i,j,a[6] = {55,77,25,41,34,12};
    int n = sizeof(a)/sizeof(a[0]);
    srand((unsigned)time(NULL));
    //for(i = 0; i < n; i++) a[i] = rand()%100+1;
    printf("data : ");
    for(i = 0; i < n; i++) printf("%3d",a[i]); printf("\n");
    //a[0] ^= a[1]; a[1] ^= a[0]; a[0] ^= a[1];
    //printf("%d %d",a[0],a[1]);
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                /*int temp = a[j];  /*a[j] ^= a[j+1]; 
                a[j] = a[j+1];        a[j+1] ^= a[j]; 
                a[j+1] = temp;        a[j] ^= a[j+1];*/
                a[j+1] = (__int64)((__int64)a[j] << 32 | (a[j] = a[j+1])) >> 32;
            }
        }
    printf("Pass %d -->",i+1);
    for(j = 0; j < n; j++) printf("%3d",a[j]);
    printf("\n");
    }
}
