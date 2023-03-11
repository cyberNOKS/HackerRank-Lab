#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,d1,d2;
    scanf("%d%d%d",&num,&d1,&d2);
    num%d1==0 && num%d2==0?printf("Yes."):printf("No.");
    return 0;
}
