#include<stdio.h>
#include<string.h>
int main()
{
 char source_str[100],target_str[100];
 printf("Please, Enter a String : ");
 gets(source_str);
 strcpy(target_str,source_str);
 printf("\nThe input String is : ");
 puts(source_str);
 printf("\nThe copied String is : ");
 puts(target_str);
 return 0;
}
