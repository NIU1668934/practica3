#include <stdio.h>
int main (){
int a[4]={1, 2, 3,4},b[4]={5, 6, 7,8,},i=0,c[4];
do{
c[i]=a[i] * b[i];
i++;
}
while (i < 4);
return 0;
}
