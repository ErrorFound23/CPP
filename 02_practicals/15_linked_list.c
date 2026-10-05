#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

typedef struct node _node;

_node *insert(_node *start)
{
    _node *curr;
    if (start == NULL)
    {
        start = (_node *)malloc(sizeof(_node));
        printf("Enter item: ");
        scanf("%d", &(start->info));
        start->next = NULL;
    }
    else
    {
        for (curr = start; curr->next != NULL; curr = curr->next)
            ;
        curr->next = (_node *)malloc(sizeof(_node));
        curr = curr->next;
        printf("Enter item: ");
        scanf("%d", &(curr->info));
        curr->next = NULL;
    }
    return (start);
}

_node *delete(_node *start)
{
    _node *curr, *temp;
    int value;
    if (start == NULL)
    {
        printf("Linked list empty!\n");
        return start;
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    if (start->info == value)
    {
        curr = start;
        start = start->next;
        free(curr);
        // printf("")
        return start;
    }

    temp = start;
    curr = start->next;

    while (curr != NULL)
    {
        if (curr->info == value)
        {
            temp->next = curr->next;
            free(curr);
            return start;
        }

        temp = curr;
        curr = curr->next;
    }
    printf("Value not found\n");
    return start;
}

_node *display(_node *start)
{
    _node *curr;

    if (start == NULL)
    {
        printf("Linked list empty!!\n");
        return start;
    }

    for (curr = start; curr != NULL; curr = curr->next)
    {
        printf("Node[%p]: %d\n", (void *)curr, curr->info);
    }
}

int main()
{
    // _node *start;
    // start = NULL;
    _node *start = NULL;
    // printf("%p\n", (void *)start);

    // use scanf(" %c", &ch); instead of scanf("%c", &ch); beacuse
    // When you press Enter after entering a character, the newline \n remains in the input buffer.
    // scanf() may read the \n instead of waiting for your next choice.
    // the leading space tells scanf() to ignore whitespace such as: \n, space, tab.

    char ch = 'a', c;
    for (; ch != 'x';)
    {
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        printf("After scanf\n");
        switch (ch)
        {
        case 'i':
            start = insert(start); // return address of first node.
            // printf("%p\n", (void *)start);
            // printf("%d\n", start->info);
            break;
        case 'p':
        case 'r':
            start = delete(start);
            break;
        case 'd':
            display(start);
            break;
        case 'x':
            printf("Exit successfully.");
            break;
        default:
            printf("Invalid choice!!");
            break;
        }
    }
    // char ch;
    // do
    // {
    //     // use scanf(" %c", &ch); instead of scanf("%c", &ch); beacuse
    //     // When you press Enter after entering a character, the newline \n remains in the input buffer.
    //     // scanf() may read the \n instead of waiting for your next choice.
    //     // the leading space tells scanf() to ignore whitespace such as: \n, space, tab.
    //     printf("Enter your choice: ");
    //     scanf(" %c", &ch);

    //     switch (ch)
    //     {
    //     case 'i':
    //         start = insert(start);
    //         break;

    //     case 'x':
    //         printf("Exit successfully");
    //         break;
    //     default:
    //         printf("Invalid choice!!"); break;
    //     }
    // } while (ch != 'x');

    return 0;
}
