#include <stdio.h>
#include <string.h>
int main()
{
    int j=0;
    while(j<10)
    {

        char str[100];
        printf("\nEnter Input :");
        gets(str);

      if( str[0] >= 'A' && str[0] <= 'Z'|| str[0]=='_')
            printf("This is valid identifier");
        else if( str[0]>= 'a' && str[0] <= 'z')
            printf("This is valid identifier");
        else if(str[0]>='0'  || str[0]<='9' || str[0]=='\0' )
            printf("This is not valid identifier so this is a invalid identifier");
        else
            printf("\n This is not a valid identifier");

        j++;


    }
}




