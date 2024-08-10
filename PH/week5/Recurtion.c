#include<stdio.h>
 
int stringLen(char *str,int i){

    if(str[i] =='\0') return 0;
    int len = stringLen(str,i+1);
    return len+1;
}

int main()
{
    char str[] = "Mafuz";
    int len = stringLen(str,0);
    printf("%d\n",len);
    return 0;
}