#include <iostream>
#include <stdio.h>


int main() {
    // std::cout << " hello world";
    // printf('%d' 1);
   enum test {zero = 0, one, two, three, four, five, six, seven};

   enum test n1, n2, n3;

   n1 = zero;
   
   n2 = two;
   printf ("Characters: %u \n", -150);

   int number = -1;

   // scanf("enter a number what between 1 to 9 %d", &number);
   // fgets (str, number);
   scanf("%d", &number); 

   
   while (!(number > -1 && number < 10)) {
       printf ("char  %d \n",  number);
       scanf("%d", &number);
   }
   printf ("what ever code that you want to print with this number %d \n", number);

   // count << test[n1];
    //std::count << n2;
   //printf ("Character n1: %d", n1);
   //printf (n2);

    return 0;  
}