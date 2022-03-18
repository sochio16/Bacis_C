#include<stdio.h>

int *getMax(int *, int *);
int main(void){
    
    // integer variables
    int x = 100;
    int y = 200;
    
    //pointer voriable
    int *max = NULL;
    max = getMax(&x, &y);
    
    //printf the greater value 
    printf("Max value: %d\n", *max);
    return 0;

}
// function definition 
int *getMax(int *m, int *n){
    if (*m > *n) {
        return m;
    }
    else { 
    }
    return n;
}
