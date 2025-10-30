// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>


int main() {
    int i,j=0,count=0;
    char input[100],stuffed[200];
    printf("Enter the only 0 and 1's:");
    scanf("%s",input);
    int len=strlen(input);
    for(int i=0;i<len;i++)
    {
        stuffed[j++]=input[i];
        if(input[i]=='1')
        {
            count++;
              if(count == 5)
              {
                 stuffed[j++]='0';
                 count=0;
              }
             
        }
         else
                count=0;
        
    }
    stuffed[j]='\0';
    printf("bit-stuffed output %s\n",stuffed);
    return 0;
}
