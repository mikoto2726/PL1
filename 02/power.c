#include <stdio.h>

double power(double x, int n){
    int i;
    double result = 1;
    if (n >= 0){
        for (i = 1; i <= n; i++){
            result *=  x;
        }
    }
    else {
        n = -1 * n;
        for (i = 1; i <= n; i++){
            result *=  x;
        }
        result = 1 / result;
    };
    return result;
}

int main(){
    double x; 
    int n;
    printf("x = ");
    scanf("%lf", & x);
    printf("n = ");
    scanf("%d", &n);
    printf("x ** n = %f\n", power(x, n));
    return 0;

}