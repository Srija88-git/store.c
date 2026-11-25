#include <stdio.h>

#define MAX 100

int main()
{
    int ids[MAX];
    char names[MAX][MAX];
    float price[MAX];
    int quantity[MAX];

    int choice, count = 0;
    int i, searchID;
    int pos, newQty;

    do
    {
        printf("\n\n===== INVENTORY MANAGEMENT =====");
        printf("\n1. Add Product");
        printf("\n2. Search Product");
        printf("\n3. Display All Products");
        printf("\n4. Update Quantity");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                if(count < MAX)
                {
                    printf("\nEnter Product ID: ");
                    scanf("%d", &ids[count]);

                    printf("Enter Product Name: ");
                    scanf(" %99[^\n]", names[count]);

                    printf("Enter Product Price: ");
                    scanf("%f", &price[count]);

                    printf("Enter Product Quantity: ");
                    scanf("%d", &quantity[count]);

                    count++;

                    printf("\nProduct added successfully!");
                }
                else
                {
                    printf("\nInventory is full!");
                }

                break;

            case 2:

                printf("\nEnter Product ID to search: ");
                scanf("%d", &searchID);

                pos = -1;

                for(i = 0; i < count; i++)
                {
                    if(ids[i] == searchID)
                    {
                        pos = i;
                        break;
                    }
                }

                if(pos == -1)
                {
                    printf("\nProduct not found!");
                }
                else
                {
                    printf("\nProduct found!");
                    printf("\nID: %d", ids[pos]);
                    printf("\nName: %s", names[pos]);
                    printf("\nPrice: %.2f", price[pos]);
                    printf("\nQuantity: %d", quantity[pos]);
                }

                break;

            case 3:

                if(count == 0)
                {
                    printf("\nNo products available!");
                }
                else
                {
                    printf("\n===== PRODUCT DETAILS =====");

                    for(i = 0; i < count; i++)
                    {
                        printf("\n\nProduct %d", i + 1);
                        printf("\nID: %d", ids[i]);
                        printf("\nName: %s", names[i]);
                        printf("\nPrice: %.2f", price[i]);
                        printf("\nQuantity: %d", quantity[i]);
                    }
                }

                break;

            case 4:

                printf("\nEnter Product ID: ");
                scanf("%d", &searchID);

                pos = -1;

                for(i = 0; i < count; i++)
                {
                    if(ids[i] == searchID)
                    {
                        pos = i;
                        break;
                    }
                }

                if(pos == -1)
                {
                    printf("\nProduct not found!");
                }
                else
                {
                    printf("\nProduct: %s", names[pos]);
                    printf("\nCurrent Quantity: %d", quantity[pos]);

                    printf("\nEnter New Quantity: ");
                    scanf("%d", &newQty);

                    quantity[pos] = newQty;

                    printf("\nQuantity updated successfully!");
                }

                break;

            case 5:

                printf("\nExiting Inventory System...");
                break;

            default:

                printf("\nInvalid choice! Try again.");
        }
        
    } while(choice != 5);

    return 0;
}
