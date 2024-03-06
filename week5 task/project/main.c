#include <stdio.h>

int main() {
    int num_items, i;
    double total_price = 0;
    char shipping_option;
    double shipping_cost = 0;
    double discount = 0;
    char continue_shopping; // Variable to store user choice to continue shopping or finish order
    printf("Welcome to the Online Order System!\n");

    do {
        printf("Please enter the number of items you'd like to order: ");
        scanf("%d", &num_items);
        double price_arr[num_items];
        char name_arr[num_items][50]; // 2D array to store names of items

        if (num_items < 2) {
            printf("You must order at least 2 items.\n");
            continue; // Continue to next iteration of the loop
        }

        for (i = 0; i < num_items; i++) {
            printf("Enter the name of item %d: ", i+1);
            scanf("%s", name_arr[i]);
            printf("Enter the price of item %d: ", i+1);
            scanf("%lf", &price_arr[i]);
            total_price += price_arr[i];
        }

        printf("Do you need overnight shipping? (y/n): ");
        scanf(" %c", &shipping_option);

        if (shipping_option == 'y' || shipping_option == 'Y') { // Account for uppercase 'Y'
            shipping_cost += 5.0;
        } else {
            if (total_price < 10) {
                shipping_cost += 2.0;
            } else {
                shipping_cost += 3.0;
            }
        }

        if (num_items > 5) {
            discount = total_price * 0.20;
        }

        double final_price = total_price + shipping_cost - discount;

        printf("\n\n------Receipt------\n");
        for (i = 0; i < num_items; i++) {
            printf("Item %d: %s - $%.2lf\n", i + 1, name_arr[i], price_arr[i]);
        }
        printf("Shipping Cost: $%.2lf\n", shipping_cost);
        printf("Discount: $%.2lf\n", discount);
        printf("Total Price: $%.2lf\n", final_price);

        printf("\nDo you want to continue shopping? (y/n): ");
        scanf(" %c", &continue_shopping);
        total_price = 0; // Reset total_price for the next order

    } while (continue_shopping == 'y' || continue_shopping == 'Y'); // Continue loop if user wants to continue shopping

    return 0;
}
