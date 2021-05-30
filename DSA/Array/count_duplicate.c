#include<stdio.h>

int main()
{
    int arr[]={25,100,41,25,32,22,100},fr[7];
    int count,visited=-1;
    for(int i=0;i<7;i++)
    {
        count=1;
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fr[j]=visited;
            }
        }
        if(fr[i]!=visited)
        {
            fr[i]=count;
        }
        
    }
    for(int k=0;k<7;k++)
    {
        if(fr[k]!=visited)
        {
            printf("%d occure %d times\n",arr[k],fr[k]);
        }
    }
}