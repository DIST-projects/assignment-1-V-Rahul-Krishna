#include<stdio.h>
#include<string.h>
int main()
{
  char names[100][100],temp[100];
  int row;
  printf("Enter the Number of names : ");
  scanf("%d",&row);
  for(int i=0;i<row;i++)
  {
    scanf("%s",names[i]);
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<row-i-1;j++)
    {
      if(strcmp(names[j],names[j+1])>0)
      {
        strcpy(temp,names[j]);
        strcpy(names[j],names[j+1]);
        strcpy(names[j+1],temp);
      } 
    }
  }
  printf("Sorted names : ");
  for(int i=0;i<row;i++)
  {
    printf("%s ",names[i]);
  }
}