//C code to count total number of numbers is a string

#include<stdio.h>

int main()
{
    int i,j,N,count=0;
    char str[10000000];
    scanf("%d %s",&N.str);  //std_in of number of array elements and the array

    for(i=0;i<N;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            for(j=i+1;str[j]>='0' && str[j]<='9';j++);
            count++;
            i=j;
        }
    }

    printf("%d",count);
    return 0;
}