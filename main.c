#include <stdio.h>
#include <stdlib.h>

int main()
{
   char answer = 0;

   printf("Enter any charictar. ");
   scanf("%c",&answer);
   getchar();//kill the return
   system("clear");
   printf("You have entered 0x%02x in hex\n",answer);
   printf("you have entered %o in octal\n", answer);
   printf("you have entered %i in decimal\n", answer);
return 0;
}
