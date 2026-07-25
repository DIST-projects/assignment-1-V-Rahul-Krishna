#include <stdio.h>
int main()
{

  int arr[100], n,low=0,high,target,mid,ind;
  printf("Enter the Number of elements in the Sorted array: ");
  scanf("%d", &n);
  high=n-1;
  printf("Enter Array Elements in sorted manner");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Element to be inserted : ");
  scanf("%d",&target);
  while(low<=high)
  {
    mid=low+(high-low)/2;
    if(arr[mid]>target)
    {
      ind=mid;
      high=mid-1;
    }
    else low=mid+1;
  }
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

