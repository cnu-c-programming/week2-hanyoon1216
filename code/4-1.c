#include <stdio.h>

int main()
{
    int a, b, cul;
    char op;

    scanf("%d %d %c", &a, &b, &op);
    
    if (op == '+') {
        cul = a + b;
    }
    else if (op == '-') {
        cul = a - b;
    }
    else if (op == '*') {
        cul = a * b;
    }
    else if (op == '/') {
        cul = a / b;
    }
    
    printf("%d\n", cul);
    
    return 0;
}
