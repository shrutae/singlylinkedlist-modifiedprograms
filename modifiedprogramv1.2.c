#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=NULL, *pos=NULL, *tail=NULL;
   
    int ch, entry, count, element;
    while(1)
    {
        printf("\n\tMAIN MENU\n1. Insert\n2. Display\n3. Count\n4. Search\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);
   
        switch(ch)
        {
            case 1: {
                    printf("\nEnter data: ");
                    scanf("%d", &entry);
                    if(head==NULL)
                    {
                        head=(struct node *)malloc(sizeof(struct node));
                        head->data=entry;
                        pos=head;
                        tail=head;
                    }
                    else
                    {
                        tail->next=(struct node *)malloc(sizeof(struct node));
                        tail=tail->next;
                        tail->data=entry;
                    }
                    break;
                }
               
            case 2: {
                    pos=head;
                    printf("\nElements are: ");
                    while(pos!=NULL)
                    {
                        printf("\t%d", pos->data);
                        pos=pos->next;
                    }
                    printf("\n");
                    break;
                }
           
       
            case 3: {
                    pos=head;
                    printf("\nThe total number of elements are: ");
                    while(pos!=NULL)
                    {
                        count++;
                        pos=pos->next;
                    }
                    printf("%d\n", count);
                    break;
                }
               
            case 4: {
                    printf("\nEnter element to be searched: ");
                    scanf("%d", &element);
                    pos=head;
                    while(pos!=NULL)
                    {
                        if(pos->data==element)
                        {
                            printf("\nThe element %d was found at position %d", element, pos);
                        }
                        pos=pos->next;
                    }
                    printf("\n");
                    break;
                }   
           
            case 5: {
                    printf("\nGood bye!\n\n");
                    exit(0);
                }
        }
    }
}
