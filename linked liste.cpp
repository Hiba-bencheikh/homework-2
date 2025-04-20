#include<stdio.h>
//function delet the head of liste
element*deletbegin(element* list){
	if(liste!= NULL ){
	element* send=liste->next
		free(liste);
			return send}
			else return NULL;}
			
 //	function delet the end of liste		
element*deletend(element* list){
		if(liste== NULL ) 
		{return NULL}
		if(liste->next == NULL ){
		free(liste),
		 return NULL;	}
	element*cur=liste*aux;
	cur=malloc(sizeof(element))	 
	while(cur->next!=NULL){
		aux=cur
		cur=cur->next;
	}
	aux->next=cur->next;
		free(cur);
			return liste; }

//function delet all element of liste that have the same value
element*deletelem(element* list,int n){
	if(liste== NULL )
	return NULL;
			if(liste->N == n ){
		element*aux	=liste->next;	
		free(liste);
			aux=deletelem(aux,n);
			return aux;}
			else{
	liste->next=deletelem(liste->next,n);			
			}
		}
