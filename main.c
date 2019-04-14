#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds);
}
 int main(void)
{

   int i;
    for (i = 0; i < 2147483647; i++) {
        delay(1);
        printf("%d\n", (int)time(NULL));
        //delay(1);
        //system("cls");
    }

    }



