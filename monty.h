#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack or queue
 * @n: integer
 * @prev: points to the previous element of the stack or queue
 * @next: points to the next element of the stack or queue
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct var_s - hold variables
 * @file_ptr: ptr to a file stream
 * @text_line: line of text read from the stream
 * @line_num: line number
 * @num_tokens: number of tokens
 * @tok: store tokens
 * @line_instruc: instructions
 *
 * Description: holds variables
 */

typedef struct var_s
{
	FILE *file_ptr;
	char *text_line;
	unsigned int line_number;
	int num_tok;
	char **tok;
	instruction_t *line_instruc;
} var_t;

extern var_t *var_ptr;

void test_arg(int argc);
void init_param();
void end_malloc(void);
void end_get_stream(char *failedfile);
void free_var_ptr(void);
void handle_invalid_instruction(void);
void token_break(void);
void handle_invalid_instruction(void);
void get_opcode(void);
void run_opcode(void);
void close_stream(void);
void free_tok(void);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);

#endif
