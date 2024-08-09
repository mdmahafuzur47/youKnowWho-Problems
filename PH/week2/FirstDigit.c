#include <stdio.h>
int main()
{
    int x, first;
    scanf("%d", &x);
    first = x;
    
    while (first >= 10)
    {
        first /= 10;
    }

    if(first%2==0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    

    return 0;
}