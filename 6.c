#include <stdio.h>
int main()
{

  int arr[100], n,target,ind;
  printf("Enter the Number of elements in the array: ");
  scanf("%d", &n);
  printf("Array Elements");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Element to be inserted : ");
  scanf("%d",&target);
  printf("Element's index : ");
  scanf("%d",&ind);
  
  for(int i=n;i>ind;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[ind]=target;
  printf("After insertion \n");
  for (int i = 0; i <=n; i++)
  {
    printf("%d ", arr[i]);
  }
return 0;
}

