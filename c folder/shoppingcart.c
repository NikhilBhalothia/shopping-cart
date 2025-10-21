#include<stdio.h>
#include<string.h>

int main(){
    

    char item[50]="";
    float price =0.0f;
    int quantity =0;
    char currency = '$';
    float total =0.0f;
    printf("What Would You Like to Buy Today?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0'; // Remove newline character
    printf("Enter price of the item: "); 
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("Item you Bought: %s\n", item);
    printf("Price of the item: %c%.2f \n",currency,price);
    printf("Quantity bought: %d\n", quantity);
    printf("The Total is : %c%.2f\n",currency, total);
    return 0;
}