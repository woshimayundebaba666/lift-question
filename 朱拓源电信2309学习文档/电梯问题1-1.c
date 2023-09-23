#include<stdio.h>
#include<math.h> 

int main(){
int a ,b ,c;
scanf("%d %d %d\n",&a,&b,&c);
printf("%d 0 0\n",c);
int d,e;
d = abs(c-a);
e = d+ abs(a-b);
printf(" %d %d 1\n",a,d);
printf(" %d %d 0",b,e);
return 0;
}
