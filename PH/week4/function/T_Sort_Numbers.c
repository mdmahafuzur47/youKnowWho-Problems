#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
   
   int org_a=a,org_b=b,org_c=c;
   if(a>b){
    int temp = a;
    a=b;
    b=temp;
   }
   if(a>c){
    int temp = a;
    a=c;
    c =temp;
   }
   if(b>c){
    int temp = b;
    b=c;
    c=temp;
   }

   printf("%d\n%d\n%d\n\n",a,b,c);
   printf("%d\n%d\n%d\n",org_a,org_b,org_c);
   
    
    return 0;
}