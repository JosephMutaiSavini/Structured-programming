#include <stdio.h>
int main()
{
   printf("hello world!\n");
   char userName[50];
   printf("please write user name\n");
   scanf("%49s",userName);
   printf("hello %s\n",userName);
   return 0;
}
