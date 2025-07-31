#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    int m1 = 3;
    double lambda1 = 530e-9;
    double theta1_deg = 65.0;
    double theta1_rad = theta1_deg * PI/180.0;
    int m2 = 2;
    double lambda2 = 700e-9;

    double d = (m1 * lambda1) / sin(theta1_rad);
    double sin_theta2 = (m2 * lambda2) / d;

    
    return 0;
}

