#include <stdio.h>
int main( )
{
    int up ,input,inspace,outspace,i,bosluk,j,sout,sin,s,t;
    printf("\tInput: ");
    scanf("%d", &input);
    outspace = input - 1 ;
    sout = input -1 ;
    i = 0;

    while (i <= input-1)
    {

        for  (j = outspace ; j >= 0; j--)
        {
           printf(" ");

        }
    outspace--;
    printf("/");
        for (inspace = 0; inspace <= (i-1)*2 ;inspace = inspace + 2 )
        {
          printf("  ");
        }
        printf("\\");
        printf("\n");
          ++i;
    }
    s=input-1;
    int h = s - 1;
    while (s >=0)
       {
        for (t=1; t<=sout-h ;++t)
            {
           printf(" ");
             }
             sout++;
        printf("\\");
        for (sin=(s-1)*2 ;sin >=0 ;sin = sin-2)
        {
          printf("  ");
        }
        printf("/");
        printf("\n");
         s--;
    }

    return 0;

}



