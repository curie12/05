#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input;
  
    printf("���� �ϳ��� �Է��Ͻÿ� : ");
    scanf("%d",&input);
  
    if(input < 0)
         printf("������ %d �Դϴ�.\n", input=-input);
    else 
         printf("������ %d �Դϴ�.\n", input);
   
    system("PAUSE");	
    return 0;
}
