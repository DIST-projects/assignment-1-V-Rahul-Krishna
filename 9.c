#include<stdio.h>
int main()
{
  int matrix1[100][100],row1,column1,sum=0;
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
for(int i=0;i<row1;i++)
{
  sum+=(matrix1[i][row1-i-1]);
}
printf("The Right Diagonal Sum : %d",sum);
return 0;
}