#include<stdio.h>

void sorter(int arr,int n)
{

    for(int i = 1;i<=n-1;i++)
   {
       key = arr[i];
       j=i-1;
       while(j>=0 && arr[j]>key)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=key;
   }

}

int main()
{
    int n,j,key;
    printf("Enter size of array :\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements :\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    sorter(arr,n);

    printf("Sorted array :\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
