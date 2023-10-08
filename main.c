#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numb=0;
    char c;
  
    printf("input a string : ");
    
    while( (c=getchar()) != '\n' )
    {      
           if( c>='0' && c<='9' )
               numb++;
    }          
    
    printf("the number of digits is %i\n", numb);
           
   
    system("PAUSE");	
    return 0;
}
