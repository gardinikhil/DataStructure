#include<stdio.h>
int main()
{
    int arr[]={1,1,2,2,3,4,4,5,3};
    int count;
    for (int i = 0; i <9 ; i++)
    {
        count=-1;
        for(int j = 0; j < 9; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        } 
        if(count == 0)
        {
            printf("%d occurs only once\n",arr[i]);
        }  
    }
    
    return 0;
}
