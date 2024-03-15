//Extend above program (11) to print ranges for float, double, and long double. Use <float.h>. “float” numbers can be printed using %f, %g, %e, %E



#include<stdio.h>
#include<float.h>
int main()
{
    printf("Range of float: %f to %f\n", FLT_MIN, FLT_MAX);
    printf("Range of double: %f to %f\n", DBL_MIN, DBL_MAX);
    printf("Range of long double: %Lf to %Lf\n", LDBL_MIN, LDBL_MAX);
    return 0;
}
