#include<stdio.h>
int main()
{
  char str[100],temp;
  int vowels=0,cons=0,digits=0,ws=0;
  printf("Enter the string : ");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++)
  {
    temp=str[i];
    if(temp == 32) 
    {
      ws++;
    }
    else if(temp>=48 && temp<=57) digits++;
    else if(temp=='a' ||temp=='e' ||temp=='i' ||temp=='o' ||temp=='u' ||temp=='A' ||temp=='E' ||temp=='I' ||temp=='O' ||temp=='U')
    {
      vowels++;
    } 
    else if((temp>='a'&&temp<='z') || (temp>='A'&&temp<='Z')) cons++;
  }

  printf("Vowels = %d\n",vowels);
  printf("Consonants = %d\n",cons);
  printf("Digits = %d\n",digits);
  printf("White Spaces = %d\n",ws);
}