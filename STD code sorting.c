#include<stdio.h>
#include<stdlib.h>

struct city
{
    char name[30];
    int std;
};
struct city c[100];
int cnt;

void read()
{
    int i = 0;
    FILE *fp;
    fp = fopen("cities.txt","r");
    cnt = 0;
    while(!feof(fp))
    {
        fscanf(fp,"%d%d",c[i].name,&c[i].std);
        i++;
        cnt++;
    }
    fclose(fp);
    printf("Data is loaded !\n");
}

void show()
{
    int i;
    printf("\nCity name std code \n");
    for(i = 0;i<cnt;i++)
    {
        printf("%s %d\n",c[i].name,c[i].std);
    }
}

void lsearch(char cname[])
{
    int i;
    for(i = 0;i<cnt;i++)
    {
        if(strcmp(c[i].name,cname)==0)
        {
            printf("\nstd code = %d\n",c[i].std);
            return;
        }

    }
    printf("City not found !\n");
}


int main()
{

    char cname[30];
    read();
    show();
    printf("Enter city name :\n");
    scanf("%d",&cname);
    lsearch(cname);

    return 0;
}
