#include<stdio.h>
#include<string.h>

struct shop_itam
{
    char name[100];
    int price;
    int quantity;
};
int main()
{
    int n;
    printf("Enter number of itams:");
    scanf("%d", &n);
    getchar();

    struct shop_itam s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter INFO of %d itam.\n", i + 1);
        printf("Enter Name:");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter price:");
        scanf("%d", &s[i].price);
        getchar();

        printf("Enter quantity:");
        scanf("%d", &s[i].quantity);
        getchar();
    }
    printf("\n........DETAILS........\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nINFO for %d itam\n", i + 1);
        printf("\nName :%s", s[i].name);
        printf("\nPrice:%d", s[i].price);
        printf("\nQuantity:%d", s[i].quantity);
    }

    return 0;
}