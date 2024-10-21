// Created by Nathan @ 08-10-24
#include <string.h>
#include <stdio.h>
#include <math.h>

bool solve_eq(float a, float b, float c)
{
    float delta, x1, x2, root;
    delta = (b * b) - (4 * a * c);

    if (delta < 0)
    {
        return false;
    }
    root = sqrt(delta);
    x1 = ((-b) + root) / 2 * a;
    x2 = ((-b) - root) / 2 * a;
    printf("The solutions to the equation are: %f and %f", x1, x2);
    return true;
}

int main(void)
{
    bool possible;
    float a,b,c;
    printf("Type the corresponding values for A, B and C as in the example\nAx² + Bx + C\n");
    printf("What's the value of A: ");
    scanf("%f",&a);
    printf("\nWhat's the value of B: ");
    scanf("%f",&b);
    printf("\nWhat's the value of C: ");
    scanf("%f",&c);

    possible = solve_eq(a,b,c);

    if(!possible){
        printf("The equation can't be solved using Bhaskara, there are no real solutions");
    }

    return 0;
}