#include<stdio.h>

int main()
{
    int arr[]={25,100,41,32,22};
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     for(int k=0;k<5;k++)
    {
        printf("%d ",arr[k]);
    }
}