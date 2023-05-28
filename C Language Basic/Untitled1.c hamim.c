#include<stdio.h>
int main()
{
    int x,y;
    printf("inter two integer");
    scanf("%d%d",&x,&y);
    if(x/y==0)
   {
    printf("%d is afactor %d",x,y);
    }
    else
    {
        printf("%d is not a factor%d",x,y);
    }
    return 0;
}
