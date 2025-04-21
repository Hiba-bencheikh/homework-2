#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef 
struct  Element{
    int value;
    struct Element* next;
} Element;

struct Element* insert(struct Element* head,int x){
    //Create the new element.
    struct Element* p;
    p=(struct Element*)malloc(sizeof(struct Element));
    p->value=x;
    p->next=NULL;
    if(head==NULL){
        //Empty List.
        head=p;
    }
    else{
        //This list contains one or more elements.
        struct Element* l;
        l=head;
        //Get the address of the last element!
        while(l->next!=NULL)l=l->next;
        l->next=p;
    }
    return head;
}
void display(struct Element* head){
    struct Element* c;
    c=head;
    if(head==NULL)printf("\n The list is empty!");
    else {
        printf("\n The content of the list is :");
         while(c!=NULL){
            printf(" %d ",c->value);
            c=c->next;
        }
    }
}

bool exist(struct Element* head, int x){
    //The list empty.
    if(head==NULL)  return false;
    else{
       //The list contains one or more elements.
       struct Element* p=head;
       while(p!=NULL){
          if(p->value==x) return true;
          p=p->next;
       }
       return false;
    }
}
int size(struct Element* head){
    if(head==NULL) return 0;
    int counter=0;
    struct Element* p=head;
    while(p!=NULL){
        counter=counter+1;
        p=p->next;
    }
    return counter;
}
int numberOcc(struct Element* head, int x){
    if(head== NULL) return 0;
    else {
        int counter=0;
        struct Element* p=head;
        while(p!=NULL){
            if(p->value==x) counter=counter+1;
            p=p->next;
        }
        return counter;
    }
}
struct Element * insertInTheHead(struct Element* head,int x){
    //create the new element.
    struct Element* p;
    p=(struct Element*)malloc(sizeof(struct Element));
    p->value=x;
    p->next=head;
    head=p;
    return head;
}

struct Element* deleteAllOccurences(struct Element* head, int x){  
   	if(head== NULL )
	return NULL;
	if(head->value == x ){
		Element*aux	=head->next;	
		free(head);
		aux=deleteAllOccurences(aux,x);
			return aux;}
			else{
	head->next=deleteAllOccurences(head->next,x);}}



int main(){
    // An empty list.
    struct Element* head=NULL;
    head=insert(head,10);
    head=insert(head,20);
    head=insert(head,30);
    head=insert(head,40);
    head=insert(head,50);
    head=insert(head,40);

    display(head);
    int x;
    head=insertInTheHead(head,40);
    display(head);
    printf("\nPlease enter the value of the element to be deleted ?");
    scanf("%d",&x);
    head=deleteAllOccurences(head,x);
    display(head);}
  
