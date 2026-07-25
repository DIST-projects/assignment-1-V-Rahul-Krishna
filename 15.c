#include<stdio.h>
int main()
{
  char str[100];
  int count=0;
  printf("Enter the String : ");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]>='A' && str[i]<='Z')
    {
      str[i]=str[i]+32;
    }
    else if(str[i]>='a' && str[i]<='z')
    {
      str[i]=str[i]-32;
    }
  }
  printf("The toggled String = %s",str);
  return 0;
}