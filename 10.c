#include<stdio.h>
int main()
{
  int matrix1[100][100],row1,column1,transpose[100][100],sum=0,found;
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
  if(matrix1[i][i]!=1)
  {
    printf("The Given Matrix is not a identity matrix");
    found=-1;
    break;
  }
}
if(found!=-1)    printf("The Given Matrix is a identity matrix");
return 0;

}