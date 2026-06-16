#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    printf("Rolling Dise...\n");
    printf("You got: %d\n",rand()%6+1);

    return 0;
}
