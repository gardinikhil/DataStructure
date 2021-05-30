#include<stdio.h>

int main()
{
    int arr[] = {40,20,60,10,40,30};
    int key,j;
    for(int i=1;i<6;i++)
    {
        key = arr[i];
        j=i-1;
        while(j>-1 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int k=0;k<6;k++)
    {
        printf("%d ",arr[k]);
    }
}