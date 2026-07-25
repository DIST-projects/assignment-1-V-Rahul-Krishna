#include<stdio.h>
int main()
{
  char str[100];
  int count=0;
  printf("Enter the String : ");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++)
  {
    if (str[i]!=32 && str[i]!='\n' && (i==0 || str[i-1]==32)) count++;
  }
  printf("The number of words in the given String : %d",count);
  return 0;
}