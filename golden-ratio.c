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

int fibonacci(int n) {

    if(n < 2) return n;
    else {
         return fibonacci(n-1) + fibonacci(n-2);
    }  
};

float golden_ration_fibonacci_iteration(int seed, float EPS) {

       float denum = fibonacci(seed),
             num = fibonacci(seed + 1), 
             tmp = 0.0;

       float phi = num / denum; 

       while((phi > tmp)?(phi - tmp):(tmp - phi) > EPS) {

             tmp = phi;

             seed++;

             denum = num;
             num = fibonacci(seed);
             phi = num / denum;
       }
       

       return phi;
};


int main() {

    printf("%lf\n", golden_ration_root_iteration(1.0, 1E-8)); 
    printf("%lf\n", golden_ration_fractional_iteration(1.0, 1E-8)); 
    printf("%lf\n", golden_ration_fibonacci_iteration(2, 1E-8)); 

 return(0);
};