#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer=59;
    int userinput;
    int trialnum=0;
  
    do
    {
                  printf("Guess a number : ");
                  scanf("%i", &userinput);
                  
                  if(userinput > answer)
                       printf("high!\n");
                  else if(userinput < answer)
                       printf("low!\n");
                  
                  trialnum++;
    }
    while(userinput != answer);          
    
    printf("Congratulation! trials: %i\n", trialnum);
           
    system("PAUSE");	
    return 0;
}
