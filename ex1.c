

// 

#include <stdio.h>
int main() {
    // the first part to print
    printf("\"\\\\//\"c:\\My%%20user\\\"ex%%%%%%%%1.c\"\\\\\\*//\"\n");
    
    // second part enter 3 numbers
    int a, b, c;
    printf("Enter 3 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    // printf("a = %d, b = %d, c = %d", a, b, c);
    printf("The sum of a and b is: %d \n", a + b);
    printf("The sub of a and b is: %d \n", a - b);
    printf("The mul of a and b is: %d \n", a * b);
    printf("The div of b and c is: %d \n", b / c);
    printf("The mod of b and c is: %d \n", b % c);

    // step number 3 enter seconds to time
    int hours,minutes, total_minutes, seconds, secondsInput;
    const int interval = 60;
    printf("Enter a number of seconds: ");
    scanf("%d", &secondsInput);

    total_minutes = secondsInput / interval;
    hours = total_minutes / interval;
    minutes = total_minutes % interval;
    seconds = secondsInput % interval;
    printf("secondsInput %d hours = %d minutes = %d seconds = %d \n",secondsInput, hours, minutes, seconds);
    // enter decade number
    printf("Enter decade number \n");
    int decade;

    scanf("%d", &decade);
    printf("The 50 best songs of the '%d0s \nTop songs of 19%d0\n",decade, decade);
    
    // last part 3 letter word
    char word [3];
    printf("Enter a three-letter word:\n");
    scanf("%3s", &word);
    int sum = 0;

    for (int i = 0; i < sizeof(word); i++) {
        sum += (int)word[i];
    } // I can create 3 vars and sum them the same way but this solution is not good for n letters if you will ask in the future.
    // ha ha I am doing it for a living hope you enjoy it Shaked chen
    
    printf("The sum of the ASCII values is:  %d \n", sum);
}
