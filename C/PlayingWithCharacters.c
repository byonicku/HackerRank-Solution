#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100], sen[101];
    
    scanf("%c %s \n %[^\n]%*c", &ch, &s, &sen);
    
    printf("%c\n%s\n%s", ch, s, sen); //answer
    return 0;
}
