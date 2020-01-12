#include<stdio.h>
#include<stdlib.h>

#define MAXLEN 5

/* this programm is to create a linked list and do various operation based on user input */

typedef struct NODE{
    int data;
    struct NODE* next;
}node;

void print_nodes(node **head){

    node *temph = *head;
    printf ("The nodes in the list are:\n");
    while (temph != NULL){
        printf ("%d\t",temph->data);
        temph = temph->next;
}
}

node* add_node(node** head,int value){

    node *temp;
    node *temph= *head;

    temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = temph;
    temph = temp;
    return temph;
}

node* delete_node(node** head,int value){

    int i;
    node* temph = *head;
    node* temp  = *head;
    node *tempi;
    int flag = 0;

    if (temph->data = value){
        temp = temph;
        temph = temph->next;
        free(temp);
        return temph;
    }
    for (temp = temph; temp != NULL; temp = temp->next){
      if (temp->next->data == value){
          tempi = temp->next;
          temp->next = temp->next->next;
          free(tempi);
          flag = 1;
      }
    }
    if (flag == 0){
        printf ("Value not found , nothing has been deleted..");
    }
    return temph;

}


node* insert_node(node **head, int value, int position){
    
    int i=1;
    int flag =0;
    int call;
    node *temph = *head;
    node *tempi;
    char buf[MAXLEN];

    if (position ==0){
        temph = add_node(&temph,value);
        return temph;
    }
    for (temph; temph != NULL; temph = temph->next){
        i++;
        if ((i-1)== position){
            flag =1;
            tempi = (node*)malloc(sizeof(node));
            tempi->data = value;
            tempi->next = temph->next;
            temph->next = tempi;
        }
    }
    if (flag == 0){
        printf ("The position entered is out of range\n");
        printf ("Would you like insert the node in the end for yes enter y\n");
        fgets(buf,MAXLEN,stdin);
        if (*buf == 'y'){
            insert_node(head, value, i-1);
        }else {
            return *head;
        }
        return *head;
    }
}


int main(){

    int value;
    int choice;
    int data;
    int position;
    int i;
    char buf[MAXLEN];
    node *head = NULL;


    while (1){
      printf ("Enter the choice:\n 1> add, 2> delete, 3> print, 4>insert, 5> return and exit linked-list\n");
      fgets(buf,MAXLEN,stdin);
      choice = atoi(buf);
      
      switch(choice){

          case 1:
              printf ("Enter the value to be added:");
              fgets(buf,MAXLEN,stdin);
              value = atoi(buf);
              head = add_node(&head, value);
              break;

          case 2:
              printf ("Enter the vale to be deleted from:\n");
              print_nodes(&head);
              printf ("\n");
              fgets(buf,MAXLEN,stdin);
              value = atoi(buf);
              head = delete_node(&head, value);
              break;

          case 3:
              printf ("Printing the nodes....\n");
              print_nodes(&head);
              break;

          case 4:
              printf ("Enter the node to be inserted:\n");
              fgets(buf,MAXLEN,stdin);
              value = atoi(buf);
              printf ("Enter the position at which the node has to be inserted:\n");
              fgets(buf,MAXLEN,stdin);
              position = atoi(buf);
              head = insert_node(&head, value, position);
              break;

        case 5:
              printf ("Exiting the linked list programm:\n");
              print_nodes(&head);
              return 0;

        default:
              printf ("Enter the valid value fo choice from the list:\n");
              break;
      }
    }
}


