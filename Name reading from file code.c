#include<stdio.h>
#include<string.h>

void bubble(char names[][50], int n)
{
    char temp[50];
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0; j<n-i-1;j++)
        {
            if(strcmp(names[j]), names[j+1]>0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
}

int main()
{
    FILE *inputfile = fopen("names.txt","r");
    FILE *outputfile = fopen("sorted.txt","w");

    if(inputfile == NULL || outputfile == NULL)
    {
        printf("Error opening file :");
        return 1;
    }

    int char names[100][50];
    int count = 0;

    while(fgets(names[count],50,inputfile))
    {
        names[count][strcspn(names[count],"\n")] = '\0';
        count++;
    }
    fclose(inputfile);

    bubblesort(names, count);

    for(int i = 0;i<count;i++)
    {
        fprintf(outputfile,"%s\n",names[i]);
    }
    fclose(outputfile);

    printf("Names sorted !\n");

    return 0;
}













