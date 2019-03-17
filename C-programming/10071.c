#include <stdio.h>
#include<math.h>

typedef struct squareRoot{
    int number[100];
    double root[100];
} squareRoot;

int main ()
{
    int i =0;
    squareRoot squareRoot1;


    for (i =0; i<=10; i++){

        squareRoot1.number[i] = i;
        squareRoot1.root[i] = sqrt(i);
    }

    for (i =0; i<=10; i++){
        printf( "Square Root of %d ", squareRoot1.number[i]);
        printf( "is : %f\n", squareRoot1.root[i]);
    }

    return 0;
}
