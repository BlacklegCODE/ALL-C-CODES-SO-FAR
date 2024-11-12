#include<stdio.h>
#include<string.h>

void bubble(char names[][50], int n)
{
    char temp[50];
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(strcmp(names[j],names[j+1])>0)
            {
                strcpy( temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
        printf("\n");
    }
}

int main()
{
    FILE *ifile = fopen("names.txt","r");
    FILE *ofile = fopen("sorts.txt","w");

    if(ifile == NULL || ofile == NULL)
    {
        printf("Error opening file !\n");
        return 1;
    }
  char names[100][50];
  int count = 0;

  while(fgets(names[count],50,ifile))
  {
      names[count][strcspn(names[count],"\n")] = '\0';
      count ++;
  }
  fclose(ifile);

  bubble(names,count);

  for(int i = 0;i<count;i++)
  {
      fprintf(ofile,"%s\n",names[i]);
  }
  fclose(ofile);
  printf("Names sorted !\n");

  return 0;
}
