#include<stdio.h>

int main()

{

char A[50]="DIUU";

char n;

int i,cnt=0;

scanf("%c",&n);

for(i=0;A[i]!='\0';i++)

{

if(A[i]==n)

cnt++;

}

printf("%d",cnt);

}
