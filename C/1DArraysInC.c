#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x, i, sum;
    
    scanf("%d", &x);
    int a[x];
    
    for(i = 0 ; i < x ; i++){
        scanf("%d", &a[i]);
    }
    
    for(i = 0 ; i < x ; i++){
        sum = a[i] + sum;
    }
    
    printf("%d", sum);
    return 0;
}
