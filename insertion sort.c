#include<stdio.h>
void sorter(int arr[],int size)
{
   for(int i = 1;i<size;i++)
   {
       int key = arr[i];
       int j = i-1;

       while(j>=0 && arr[j]> key)
       {
           arr[j+1] = arr[j];
           j = j -1;
       }
       arr[j+1] = key;
   }
}

/*void printer(int arr[], int size)
{
    printf("Sorted array :\n");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}*/

int main()
{
    int minid,size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements :\n");
    for(int i = 0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    sorter(arr,size);
   // printer(arr,size);
   printf("Sorted array :\n");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
