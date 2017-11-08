#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

SVALUE SVALUE_ERR = -9999;

STACK new_stack() {
    // Initializes a stack struct to a NULL type
    STACK new = NULL;
    return new;
}

void push_stack(STACK *s, SVALUE val) {
    /* Adds a new element to the top of the stack */
    
    // Create a new empty stack with space to accomodate for all elements
    STACK new = (STACK) malloc(sizeof(struct stack));
    if (new == NULL) {
        fprintf(stderr, "ERROR: Unable to push onto stack\n");
        return;
    }
    // Assign the value to the new stack
    new->data = val;
    // Attaching the old stack to the bottom of the new stack
    new->head = *s;
    // Reassign s to the new stack
    *s = new;
}

SVALUE pop_stack(STACK *s) {
    /* Returns the top value of the stack and removes the top node from the stack */
    SVALUE val;
    STACK temp;
    if (*s == NULL) {
      fprintf(stderr, "ERROR: Attempt to pop value from empty stack\n");
      val = SVALUE_ERR;
    }
    else {
      // Get the stack's top value
      val = (*s)->data;
      // Store the stack in a temporary variable
      temp = (*s);
      // Change *s so it points to the second element in the stack (removes the top element)
      *s = (*s)->head;
      // Garbage collection!
      free(temp);
    }
    return val;
}

void print_svalue(SVALUE v){
    printf("%d\n",v);
}

void print_stack(STACK s){
  STACK temp = s;
  while (temp != NULL){
      SVALUE v = (temp)->data;
      print_svalue(v);
      temp = (temp)->head;
  }
}








