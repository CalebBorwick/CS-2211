#include <stdio.h>


int main() {
    	int base;
    	int expon;
    	int result;

    	printf("Enter the base value: ");
    	scanf("%d", &base);
    	if (base<0){
		printf("You cannot use a negative base\n");
		main();
	}
	else{
		printf("Enter the exponential value: ");
    		scanf(" %d", &expon);
	
		result = power(base,expon);
		printf("%d^%d = %d\n", base, expon, result);
	}
}

int power(int base, int expon){
    if (expon != 0){
        return (base*power(base, expon-1));
    }
    else{
        return 1;
    }
}
