#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i,j,a[6] = {55,77,25,41,34,12};
    int add;
    int n = sizeof(a)/sizeof(a[0]);
    srand((unsigned)time(NULL));
    for(i = 0; i < n; i++) a[i] = rand()%100+1;
    printf("data : ");
    for(i = 0; i < n; i++) printf("%3d",a[i]); printf("\n");
    for(i = 0; i < n-1; i++){
        int max = a[i];
        add = i;
        for(j = i; j < n-1; j++){
            if(max > a[j+1]){
                max = a[j+1];
                add = j+1;
            }
        }
            a[add] = a[i];
            a[i] = max;
        printf("Pass %d -->",i+1);
        for(j = 0; j < n; j++) printf("%3d",a[j]);
        printf("\n");
    }   
}
