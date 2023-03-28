#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("PEC");
    int array[10];
    int i;

    printf("input 10 elements in the array :\n");
    for(i=0; i<10; i++){

     printf(" element - %d : " ,i);
     scanf("%d", & array [i]);

    }

    printf("\n elements in array are: ");
    for(i=0; i<10; i++){
        printf(" %d :", array[i]);
    }
    printf("\n");

    return 0;
}
