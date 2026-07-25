#include<stdio.h>
int main()
{
  int matrix1[100][100],row,column,matrix2[100][100],sum[100][100];
  printf("Enter the number of Rows : ");
  scanf("%d",&row);
  printf("Enter the number of columns : ");
  scanf("%d",&column);
  printf("Array 1 elements\n");
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      scanf("%d",&matrix1[i][j]);
    }
  }
    printf("Array 2 element\n");

  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      scanf("%d",&matrix2[i][j]);
    }
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      sum[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  printf("Resulting Matrix from addition\n");
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      printf("%d ",sum[i][j]);
    }
    printf("\n");
  }
  return 0;

}