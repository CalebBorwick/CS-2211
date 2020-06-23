#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int initial() {
    const char segements[10][3][3] = {{{' ', '_', ' '}, {'|', ' ', '|'}, {'|', '_', '|'}}, //0
                                      {{' ', ' ', ' '}, {' ', '|', ' '}, {' ', '|', ' '}}, //1
                                      {{' ', '_', ' '}, {' ', '_', '|'}, {'|', '_', ' '}},//2
                                      {{' ', '_', ' '}, {' ', '_', '|'}, {' ', '_', '|'}},//3
                                      {{' ', ' ', ' '}, {'|', '_', '|'}, {' ', ' ', '|'}},//4
                                      {{' ', '_', ' '}, {'|', '_', ' '}, {' ', '_', '|'}},//5
                                      {{' ', '_', ' '}, {'|', '_', ' '}, {'|', '_', '|'}},//6
                                      {{' ', '_', ' '}, {' ', ' ', '|'}, {' ', ' ', '|'}},//7
                                      {{' ', '_', ' '}, {'|', '_', '|'}, {'|', '_', '|'}},//8
                                      {{' ', '_', ' '}, {'|', '_', '|'}, {' ', '_', '|'}}};//9

    char segs[10];
    int i=0;
    int column = 0;
    printf("Enter a int (10 char max): ");
    scanf(" %s", segs);
    int length = strlen(segs);
    for (i = 0; i < length; ++i){
        char ch;
        ch = segs[i];
        if (ch != '\n'){
            int numHere =0;
            if(segs[i]=='0'){
                numHere = 0;
            }else if(segs[i]=='1'){
                numHere = 1;
            }else if(segs[i]=='2') {
                numHere = 2;
            }else if(segs[i]=='3') {
                numHere = 3;
            }else if(segs[i]=='4') {
                numHere = 4;
            }else if(segs[i]=='5') {
                numHere = 5;
            }else if(segs[i]=='6') {
                numHere = 6;
            }else if(segs[i]=='7') {
                numHere = 7;
            }else if(segs[i]=='8') {
                numHere = 8;
            }else if(segs[i]=='9') {
                numHere = 9;
            }
            else{
                printf("Invalid Input");
                exit(EXIT_FAILURE);
            }
            for (column=0; column<3;++column){
                printf("%c", segements[numHere][0][column]);
            }
        }

    }
    printf("\n");
    for (i = 0; i < length; ++i){
        char ch;
        ch = segs[i];
        if (ch != '\n'){
            int numHere =0;
            if(segs[i]=='0'){
                numHere = 0;
            }else if(segs[i]=='1'){
                numHere = 1;
            }else if(segs[i]=='2') {
                numHere = 2;
            }else if(segs[i]=='3') {
                numHere = 3;
            }else if(segs[i]=='4') {
                numHere = 4;
            }else if(segs[i]=='5') {
                numHere = 5;
            }else if(segs[i]=='6') {
                numHere = 6;
            }else if(segs[i]=='7') {
                numHere = 7;
            }else if(segs[i]=='8') {
                numHere = 8;
            }else if(segs[i]=='9') {
                numHere = 9;
            }
            else{
                printf("Invalid Input");
                exit(EXIT_FAILURE);
            }
            for (column=0; column<3; ++column){
                printf("%c", segements[numHere][1][column]);
            }
        }

    }
    printf("\n");
    for (i = 0; i < length; ++i){
        char ch;
        ch = segs[i];
        if (ch != '\n'){
            int numHere =0;
            if(segs[i]=='0'){
                numHere = 0;
            }else if(segs[i]=='1'){
                numHere = 1;
            }else if(segs[i]=='2') {
                numHere = 2;
            }else if(segs[i]=='3') {
                numHere = 3;
            }else if(segs[i]=='4') {
                numHere = 4;
            }else if(segs[i]=='5') {
                numHere = 5;
            }else if(segs[i]=='6') {
                numHere = 6;
            }else if(segs[i]=='7') {
                numHere = 7;
            }else if(segs[i]=='8') {
                numHere = 8;
            }else if(segs[i]=='9') {
                numHere = 9;
            }
            else{
                printf("Invalid Input");
                exit(EXIT_FAILURE);
            }
            for (column=0; column<3;++column){
                printf("%c", segements[numHere][2][column]);
            }
        }

    }
    printf("\n");
    return 0;
}

int main(){
    while(1){
        initial();
        printf("\n");
        char ch;
        printf("Would you like to continue (y or n): \n");
        scanf(" %c", &ch);
        if (ch == 'y') {
            main();
            continue;
        } else if (ch == 'n') {
            exit(EXIT_FAILURE);
        }
    }
}
