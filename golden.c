#include <stdio.h>
#include <math.h>

float golden_ration_root_iteration(float phi, float EPS) {

       float tmp = 0.0;

       phi = 1.0;

       EPS = 1E-8;

       while( (phi > tmp) ? (phi - tmp) : (tmp - phi) > EPS) {

             tmp = phi;

             phi = sqrt(1.0 + phi);
       }
       return phi;
};

float golden_ration_fractional_iteration(float phi, float EPS) {

       float tmp = 0.0;

       phi = 1.0;

       EPS = 1E-8;

       while( (phi > tmp) ? (phi - tmp) : (tmp - phi) > EPS) {

             tmp = phi;

             phi = 1.0 + (1.0 / phi);
       }

       return phi;
};

int main() {

    printf("%lf\n", golden_ration_root_iteration(1.0, 1E-8)); 
    printf("%lf\n", golden_ration_fractional_iteration(1.0, 1E-8)); 

 return(0);
};