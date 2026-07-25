#include<stdio.h>
int main()
{
  int matrix1[100][100],row1,column1,transpose[100][100];
  printf("Enter the number of Rows in matrix1 : ");
  scanf("%d",&row1);
  printf("Enter the number of columns in matrix1 : ");
  scanf("%d",&column1);

  printf("Array 1 elements\n");
  for(int i=0;i<row1;i++)
  {
    for(int j=0;j<column1;j++)
    {
      scanf("%d",&matrix1[i][j]);
    }
  }
  //Transposing
  for(int i=0;i<row1;i++)
  {
    for(int j=0;j<column1;j++)
    {
      transpose[j][i]=matrix1[i][j];
    }
  }
    printf("Resulting Matrix from transpose\n");
  for(int i=0;i<column1;i++)
  {
    for(int j=0;j<row1;j++)
    {
      printf("%d ",transpose[i][j]);
    }
    printf("\n");
  }
  return 0;

}