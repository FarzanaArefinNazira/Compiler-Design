#include <stdio.h>
#include <string.h>
int main() {
int j=0;
while(j<10){
 char keyword[32][10]={
 "auto","double","int","struct","break","else","long",
 "switch","case","enum","register","typedef","char",
 "extern","return","union","const","float","short",
 "unsigned","continue","for","signed","void","default",
 "goto","sizeof","voltile","do","if","static","while"
 } ;
 char str[100];
 printf("\nEnter Input :");
 gets(str);
 int flag=0,i;
 for(i = 0; i < 32; i++) {
 if(strcmp(str,keyword[i])==0) {
 flag=1;
 }
 }
 if(flag==1)
 printf("%s is a keyword",str);
 else if(str[0]=='>' && str[1]=='\0')
 printf("%s is a grater than operator",str);
 else if(str[0]=='<' && str[1]=='\0')
 printf("This is a less than operator");
 else if(str[0]=='=' && str[1]=='\0')
 printf("This is a equal operator");
 else if(str[0]=='!' && str[1]== '=' && str[2]=='\0')
 printf("This is a not a equal operator");
 else
 printf("\n This is not a keyword or operator");
 j++;
}
}
