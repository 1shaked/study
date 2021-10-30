

// 

#include <stdio.h>
int main() {
    char MessageCharArray[38] = {"\"\\\\//\"C:\\My%20user\\\"ex%%%%1.c\"\\\\\\*//\""};
    // MessageCharArray[37] = 0;
    printf("%s \n", MessageCharArray);
    printf("\"\\\\//\"c:\\My%%20user\\\"ex%%%%%%%%1.c\"\\\\\\*//\"\n");
    // printf("\"\\\\//\"C:\\My%20user\\\"ex%%%%1.c\"\\\\\\*//\"");
    
    
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


    int hours,minutes, total_minutes, seconds, secondsInput;
    const int interval = 60;
    printf("Enter a number of seconds: ");
    scanf("%d", &secondsInput);

    total_minutes = secondsInput / interval;
    hours = total_minutes / interval;
    minutes = total_minutes % interval;
    seconds = secondsInput % interval;
    printf("secondsInput %d hours = %d minutes = %d seconds = %d \n",secondsInput, hours, minutes, seconds);

    printf("Enter decade number \n");
    int decade;

    scanf("%d", &decade);
    printf("The 50 best songs of the '%d0s \nTop songs of 19%d0\n",decade, decade);
    // printf("The 50 best songs of the %d 0", decade);
    // printf("Top songs of 19 %d 0");
    char word[3];
    printf("Enter a three-letter word:\n");
    scanf("%s", &word);
    int sum = 0;

    for (int i = 0; i < sizeof(word); i++) {
        sum += (int)word[i];
    } // I can create 3 vars and sum them the same way but this solution is not good for n letters if you will ask in the future.
    // ha ha I am doing it for a living hope you enjoy it Shaked chen
    
    printf("last stage %s\nThe Sum is : %d \n", word, sum);
}
