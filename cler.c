#include <stdio.h>

int main() {
    int num,bit;
    printf("Enter a hexadecimal number : ");
    scanf("%d", &num);
    printf("Enter the bit position to set): ");
    scanf("%d", &bit);
    num &=~ (1 << bit);
    printf("Result after clearing the bit %d: 0x%02X\n",bit,num);
return 0;
}