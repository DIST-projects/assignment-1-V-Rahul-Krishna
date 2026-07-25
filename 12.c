#include<stdio.h>
int main()
{
  char str[100],ch;
  int count=0;
  printf("Enter the String : ");
  fgets(str,sizeof(str),stdin);
  printf("Character to be counted : ");
  scanf("%c",&ch);
  for(int i=0;str[i]!='\0';i++)
{
  if(str[i]==ch) count++;

}
printf("The Frequency of the given Character is %d ",count);
return 0;
}