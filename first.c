#include<stdio.h>




int count,n=0;
char p[10][10], first[10];

int main()
{
int i,x;
char c,ch;
printf("The number of productions :");
scanf("%d",&count);

for(i=0;i<count;i++)
scanf("%s%c",p[i],&ch);
do
{
n=0;
printf("Element :");
scanf("%c",&c);
FIRST(c);
printf("\n FIRST(%c)= { ",c);
for(i=0;i<n;i++)
printf("%c ",first[i]);
printf("}\n");

printf("press 1 to continue : ");
scanf("%d%c",&x,&ch);
}
while(x==1);


}

void FIRST(char c)
{
int j;
if(!(isupper(c)))first[n++]=c;
for(j=0;j<count;j++)
{
if(p[j][0]==c)
{
if(p[j][2]=='$') first[n++]='$';
else if(islower(p[j][2]))first[n++]=p[j][2];
else FIRST(p[j][2]);
}
}
}


