#include<stdio.h>
#include"singlylist.h"

int main()
{
    int ch;
    do
    {
        printf("\n1.Create\n2.Display\n0.Exit\n");
        printf("Enter choice :\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create();
            break;

            case 2: display();
            break;

            case 0: break;

            default: printf("Invalid choice !\n");
        }
    }while(ch != 0);

    return 0;
}
