#include<stdio.h>
int main()
{
  int matrix1[100][100],row1,column1,row2,column2,sum,matrix2[100][100],multi[100][100];
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
  printf("Enter the number of Rows in matrix2 : ");
  scanf("%d",&row2);
  printf("Enter the number of columns in matrix2 : ");
  scanf("%d",&column2);
    printf("Array 2 element\n");

  for(int i=0;i<row2;i++)
  {
    for(int j=0;j<column2;j++)
    {
      scanf("%d",&matrix2[i][j]);
    }
  }
  for(int i=0;i<row1;i++)
  {
    
    for(int j=0;j<column2;j++)
    {
      sum=0;
      for(int k=0;k<row2;k++)
      {
        sum+=matrix1[i][k]*matrix2[k][j];

      }
      multi[i][j]=sum;

    }
  }
    printf("Resulting Matrix from Multiplication\n");
  for(int i=0;i<row1;i++)
  {
    for(int j=0;j<column2;j++)
    {
      printf("%d ",multi[i][j]);
    }
    printf("\n");
  }
  return 0;

}