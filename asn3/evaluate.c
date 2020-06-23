#include <stdio.h>
#include <stdlib.h>

char get_op(){
    char op;
    scanf("%c", &op);
    while (op == ' '){
        scanf("%c", &op);
        printf("Operator: %c \n",op);
    }
    return op;
}

float get_num(){
    float num;
    scanf("%f",&num);
    printf("Number: %.2f \n", num);
    return num;
}

float m_exp(float sub_exp, char op) {
    float next_num;
    char next_op;
    next_num = get_num();
    next_op = get_op();


    if ((next_op == '+' || next_op == '-' || next_op == '\n')) {
        ungetc(next_op, stdin);
        return next_num;
    }


    else {
        sub_exp=next_num;
        op=next_op;
        next_num = get_num();
        next_op = get_op();
        if (op == '/') {
            next_num = sub_exp / next_num ;
            if ((next_op == '+' || next_op == '-' || next_op == '\n')) {
                ungetc(next_op, stdin);
                return next_num;
            }

            return m_exp(next_num, next_op);

        }
        if (op == '*'){
            next_num = sub_exp * next_num;
            if ((next_op == '+' || next_op == '-' || next_op == '\n')) {
                ungetc(next_op, stdin);
                return next_num;
            }
            return m_exp(next_num, next_op);

        }


        if(op != '/' || op != '*'){
            exit(EXIT_FAILURE);
        }

    }

}


float s_exp(float sub_exp, char op){
    char next_op;
    float next_num;

    if (op =='\n'){
        return sub_exp;
    }
    next_num = m_exp(sub_exp,op);
    next_op = get_op();
    if (op =='+'){
        next_num = sub_exp + next_num;
        return s_exp(next_num,next_op);
    }
    if (op =='-'){
        next_num= sub_exp - next_num;
        return s_exp(next_num,next_op);
    }
    else{
        return s_exp(next_num,next_op);

    }
}
int main(){
    while(1){
        printf("Enter a value: ");
        char end;
        float next_num = 0;
        char next_op = '+';
        float result;
        result = s_exp(next_num, next_op);
        printf("The answer is %.2f \n", result);
        printf("Enter Y to continue on N to exit: ");
        scanf(" %c", &end);
        if (end =='Y'|| end =='y'){
            main();
        }
        else if (end == 'N'|| end =='n'){
            exit(EXIT_FAILURE);
        }
        else {
            printf("Invalid Input: \n ");
            continue;
        }

    }

}
