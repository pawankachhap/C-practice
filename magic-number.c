/* program to find the next magic number after the given number.
The given number can or cannot be a magic number */

#include<stdio.h>

int magic(int n)
{
    int temp=n,sum=0;
    while(temp>=1)
    {
        if(temp<10)
            sum+=temp*temp;
        else
        sum+=(temp%10)*(temp%10);

        temp/=10;
    }
    if(sum%10==0 || sum==1)
        return 1;
    else if(sum<=n)
        return -1;
    else
        return magic(sum);
}

//driving function'

int main()
{
    int num=0,result=-1;
    while(result!=1)
    {
        result=magic(++num);
    }
    printf("%d",num);
}
