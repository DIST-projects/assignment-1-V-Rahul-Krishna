#include <stdio.h>
int main()
{
  int arr[100],n;
  printf("Enter the Number of elements in the array : ");
  scanf("%d",&n);
  printf("Array Elements");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Printing in reverse Order : \n");
  for(int i=n-1;i>=0;i--)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}