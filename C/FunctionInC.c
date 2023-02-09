#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a, int b){
    return a > b ? a : b;
}

int max_of_four(int a, int b, int c, int d){
        int maxL = max(a, b);
        int maxR = max(c, d);
        
        return maxL > maxR ? maxL : maxR;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


