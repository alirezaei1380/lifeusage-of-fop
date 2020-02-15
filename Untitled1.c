#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 24

int main()
{
    int counter = 0, epi[SIZE] = {};
    srand(time(NULL));
    while(counter != SIZE)
    {
        int temp = rand() % SIZE;
        if(!epi[temp])
        {
            counter++;
            printf("%d\n", temp + 1);
            epi[temp]++;
        }
    }
}
