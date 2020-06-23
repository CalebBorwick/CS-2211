#include <stdio.h>
#include <math.h>

void pi(double lim){
    double total, value;
    int num, i;
    value = 0;
    total = 0;
    value = (((4.0/lim)+1.00)/2.00)-1.00;
    num=ceil(value);
    for(i=1;i<=num;i++){
        total+=((pow((-1), i+1))*(4.0/((2*i)-1)));
    }
    printf("%f\n",total);

}

int main(void){
    double num;
    printf("Enter a value to estimate pi too: ");
    scanf("%lf", &num);
    pi(num);
}
