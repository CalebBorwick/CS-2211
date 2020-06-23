
#include <stdio.h>

int main() {
	int value, toConvert;
	float result;
	char ch;
    	printf("Enter a value between 1 and 5: ");
    	scanf("%d", &value);

    	if (value==1){
        	printf("Enter K or M for conversion: ");
        	scanf(" %c", &ch);
        	if (ch=='K' || ch=='k'){
            		printf("Enter the kilometer value to be converted: ");
            		scanf("%d", &toConvert);
           		result = toConvert/1.609;
            		printf("There is %0.2f miles in %d kilometer\n", result, toConvert);

        	}	
        	else if (ch=='M' || ch == 'm'){
            		printf("Enter the mile value to be converted: ");
            		scanf("%d", &toConvert);
            		result = (toConvert*1.609);
            		printf("There is %0.2f kilometer in %d miless\n", result, toConvert);
        	}
		else {
			printf("Please enter a valid input\n");
		}	
    	}		
    	else if (value==2){
        	printf("Enter F or M for conversion: ");
        	scanf(" %c", &ch);
        	if (ch=='M' || ch == 'm'){
            		printf("Enter the meter value to be converted: ");
           		scanf("%d", &toConvert);
            		result = (toConvert*3.281);
            		printf("There is %0.2f feet in %d meters\n", result, toConvert);
        	}
		else if (ch=='F' || ch == 'f'){
            		printf("Enter the foot value to be converted: ");
            		scanf("%d", &toConvert);
            		result = (toConvert/3.281);
            		printf("There is %0.2f meters in %d feet\n", result, toConvert);       
		}
		else {
                        printf("Please enter a valid input\n");
                }
    	}
    	else if (value==3){
       		 printf("Enter C or I for conversion: ");
       		 scanf(" %c", &ch);
       		 if (ch=='C' || ch == 'c'){
          		printf("Enter the centimeter value to be converted: ");
          		scanf("%d", &toConvert);
            		result = (toConvert/2.54);
            		printf("There is %0.2f inches in %d centimeters\n", result, toConvert);
        	}
        	else if (ch=='I' || ch=='i'){
            		printf("Enter the inch value to be converted: ");
            		scanf("%d", &toConvert);
            		result = (toConvert*2.54);
            		printf("There is %0.2f centimeters in %d inches\n", result, toConvert);
        	}
		else {
                        printf("Please enter a valid input\n");
                }
    	}		
    	else if (value==4){
        	printf("Enter C or F for conversion: ");
        	scanf(" %c", &ch);
        	if (ch=='C'|| ch == 'c'){
           		 printf("Enter the celsius temperature to be converted: ");
           		 scanf("%d", &toConvert);
           		 result = ((toConvert*1.8)+32);
           		 printf("%d celsius is %0.2f fahrenheit\n", toConvert, result);
        	}
        	else if (ch=='F' || ch=='f'){
            		printf("Enter the fahrenheit temperature to be converted: ");
        		scanf("%d", &toConvert);
			result = ((toConvert-32)/1.8);
           		printf("%d fahrenheit is %0.2f celsius\n", toConvert, result);
		}
	}
	
	else if(value==5){
    		return 0;
	}	
	main();
	return 0;

}
