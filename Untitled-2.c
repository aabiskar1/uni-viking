
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define n 100000000 

int main(int argc, char**argv){


int niter=0;
double x,y;
int i,count=0; /* # of points in the 1st quadrant of unit circle */
double z;
double pi;
count=0;
    // a timer
    clock_t start, stop;
    double duration;
    start = clock();
for ( i=0; i<n; i++) {
x = (double)rand()/RAND_MAX;
y = (double)rand()/RAND_MAX;
z = x*x+y*y;
if (z<=1) count++;
}
pi=(double)count/n*4;
printf("estimate of pi is %g \n",pi);
stop = clock();
duration = (double)(stop - start) / CLOCKS_PER_SEC;
printf("Time taken: %f\n", duration);
return 0;

}