// Copyright (c) goes to Jan Oliver Quant

/*
    TO:DO #Global, physics_c
    1. Make it work
    2. refactor it into functions and files
    3. Connect it to the renderer
    4. Optimize
    5. Do whatever
*/

#include <stdio.h>

int main() {
    //Basic Newtonian gravitational force
    //Might turn this into floats later.

    /*
        TO:DO #1
        Make a vector that does the equals and opposites, sum all forces together, and do that in a while loop
    */
    double G = 1.0;
    double m1 = 43.0, m2 = 21.0;
    double r2 = 2.0;

    double F = G * (m1 * m2) / r2;

    printf("Force: %f\n", F);
    return 0;
}