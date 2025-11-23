#include <stdio.h>

struct Item {
    char name[50];
    float price;
    int qty;
};

int main() {
    struct Item items[50];
    int count = 0;
    int choice;
    float total = 0;

    while (1) {
        printf("\n===== BILLING SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. View Bill\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // ADD ITEM
            printf("\nEnter item name: ");
            scanf("%s", items[count].name);

            printf("Enter price: ");
            scanf("%f", &items[count].price);

            printf("Enter quantity: ");
            scanf("%d", &items[count].qty);

            count++;
            printf("Item added successfully.\n");
        }

        else if (choice == 2) {
            // VIEW BILL
            total = 0;
            printf("\n====== FINAL BILL ======\n");
            printf("%-10s %-10s %-10s\n", "Name", "Qty", "Amount");

            for (int i = 0; i < count; i++) {
                float amt = items[i].price * items[i].qty;
                total += amt;
                printf("%-10s %-10d %-10.2f\n", items[i].name, items[i].qty, amt);
            }

            printf("-------------------------------\n");
            printf("TOTAL AMOUNT: %.2f\n", total);
        }

        else if (choice == 3) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
