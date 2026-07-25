//Count the total number of duplicate elements in an array
#include<stdio.h>
int main()
{
  int arr[100],n,count=0;
  printf("Enter the Number of elements in the array : ");
  scanf("%d",&n);
  printf("Array Elements");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]==arr[i+1]) count++;
  }
  printf("The total number of duplicates in the array : %d",count);
  return 0;


}