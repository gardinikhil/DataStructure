#include<stdio.h>

int main()
{
    int arr[]={25,100,41,32,22};
    int bubble;
    for(int i=0;i<5;i++)
    {
        bubble = arr[0];
        for(int j=1;j<5-i;j++)
        {
            if(bubble<arr[j])
            {
                bubble = arr[j];
            }
            else
            {
                int temp = arr[j];
                arr[j]=bubble;
                arr[j-1]=temp;
            }
        }
    }
    for(int k=0;k<5;k++)
    {
        printf("%d ",arr[k]);
    }
}