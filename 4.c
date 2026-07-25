#include <stdio.h>
int main()
{

  int arr[100], n, count = 0,temp;
  printf("Enter the Number of elements in the array : ");
  scanf("%d", &n);
  printf("Array Elements");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
    
  }
  printf("Unique Elements in the array : \n");
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == arr[i + 1] && i!=n-1)
      continue;
    printf("%d ", arr[i]);
  }
  return 0;
}