#include <stdio.h>

// Post: Returns the number of times x appears within L
// Post: L should remain unchanged.
unsigned int freq(LL_t * L, int x) {
	int count = 0;
	LL_t * current = L;
	while(current->head != NULL){	// views the entire linked list
		if(current->head->data == x){	// if the data matches x count increases by 1
			count = count + 1;
		}
		current->head = current->head->next;	// moves onto the next node
	}
	return count;
}

// Post: Outputs all data in order from head to tail as a
// space-separated string of decimal integers.
// Post: L should remain unchanged.
void print(LL_t * L) {
	if(L->head == NULL){	// returns when the end of the linked list is reached
		return;
	}
	LL_t * current = L;
	printf("%d ", current->head->data);	// prints the current value
	current->head = current->head->next;
	print(current);	// sends the the shortened linked list
}

// Post: L contains the data in the original L, but in the reverse order.
void reverse(LL_t * L) {
	node_t* last = NULL;
	node_t* current = L->head;
	node_t* next = NULL;
	L->tail = L->head;
	while(current != NULL){
		// next nodes address
		next = current->next;
		// changes the current nodes pointer
		current->next = last;
		// moves to the next node
		last = current;
		current = next;
	}
	L->head = last;
}