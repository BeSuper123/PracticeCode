#include <stdio.h>
#include <string.h>

struct stock_record {
    int no;
    char description[21];
    float price;
    int qty;
};



int main() {
    // PART A
    struct stock_record stock_item = {
        2602,
        "swimming suit",
        182.50,
        35
    };

    // PART B
    printf("Enter the item number: ");
    scanf("%d", &stock_item.no);

    printf("\nEnter the item description: ");
    while (getchar() != '\n');
    fgets(stock_item.description, 21, stdin);
    stock_item.description[strlen(stock_item.description) - 1] = '\0';

    printf("\nEnter the item's price: ");
    scanf("%f", &stock_item.price);

    printf("\nEnter the quantity of this item: ");
    scanf("%d", &stock_item.qty);

    // PART C
    printf("\n*Stock Item*\n\n");
    printf("Item Number: %d \nDescription: %s \nPrice: %.2f \nQuantity: %d", stock_item.no, stock_item.description, stock_item.price, stock_item.qty);

    return 0;

} // end main