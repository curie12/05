#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum=0;
    int inputnum;
    int i;
  
    printf("input a number : ");
    scanf("%i", &inputnum);
    
    for( i=0; i<=inputnum; i++ )
    {      
           sum = sum + i;
    }          
    
    printf("the result is %i\n", sum);
           
    system("PAUSE");	
    return 0;
}
