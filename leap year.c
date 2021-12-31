#include <stdio.h>
int main(void) {
   int year;
   printf("enter a year; ");
   scanf("%d", &year);
   if (year % 400 == 0)
   {
     printf("%d is a leap year.", year); 
   }
   else if (year % 100 == 0)
   {
     printf("%d is not aleap year.", year);
   }
   else if(year % 4 == 0)
   {
     printf("%d is a leap year.", year);
   }
   else{
     printf("%d is not a leap year.", year);
   }
   return 0;
/* case:1
   clang-7 -pthread -lm -o main main.c
 ./main
enter a year; 2020
2020 is a leap year. 
/* case:2
    clang-7 -pthread -lm -o main main.c
 ./main
enter a year; 2020
2020 is not a leap year.
   
   
   
   
   
   
   
     return 0;
}