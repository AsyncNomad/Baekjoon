#include<stdio.h>
#define SIZE = 100000;
typedef struct stack {
    int value;
} Stack;
Stack s[SIZE];

int top = 0;
void push(int* top_ptr, Stack s) {
    if (*top_ptr >= SIZE) {
        printf("Stack is full");
    }
    s[*top_ptr++] = 
}
int main() {

}