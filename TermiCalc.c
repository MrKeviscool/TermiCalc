#include<stdio.h>

int math(int operation, int numbera, int numberb) {
    if(operation == 1) {
        return numbera + numberb;
    }
    if(operation == 2) {
        return numbera - numberb;
    }
    if(operation == 3) {
        return numbera * numberb;
    }
    if(operation == 4) {
        return numbera / numberb;
    }
    else {
        printf("invalid operation. error code: \n");
        return 187.0;
    }
}

int main() {
    int oper;
    int numa;
    int numb;
    int quitnum;

    printf("TermiCalc \n");
    printf("V 0.3 \n");
start:
    printf("\n");
    printf("+ = 1, - = 2, × = 3, ÷ = 4 \n");
    printf("\n");
    printf("enter operation: ");
    scanf("%d", &oper);
    printf("\n");
    printf("enter first number: ");
    scanf("%d", &numa);
    printf("\n");
    printf("enter second number: ");
    scanf("%d", &numb);
    printf("\n");
    printf("%d", math(oper, numa, numb));
    printf("\n");
    printf("\n");
    printf("Quit? [N = 0 or Y = 1]: ");
    scanf("%d", &quitnum);
    if(quitnum == 1) {
        goto quit;
    }
    if(quitnum == 0) {
        quitnum = 2;
        goto start;
    }
quit:
    printf("\n");
    printf("Made By Daniel Spinello \n");
    return 0;
}