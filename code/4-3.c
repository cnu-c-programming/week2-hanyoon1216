#include <stdio.h>

int main()
{
    int a, i; 
    scanf("%d", &a);

    int j = 0;
    for (i = 2; i < a; i++) {
        int cul = a % i;
        if (cul == 0){
            j = 1;
            break;
        }
    }
    if(j == 1, a == 1){
        printf("false");
    }
    else
        printf("true");

    
    return 0;
}
