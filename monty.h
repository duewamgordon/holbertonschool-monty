#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

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
 * struct arg_s - hold variables
 * @file_stream: ptr to a file stream
 * @text_line: line of text read from the stream
 * @line_number: line number
 * @num_tokens: number of tokens
 * @tok: store tokens
 * @line_instruc: instructions
 * @stack_len: tracks the nodes in the stack
 * @head: top of the stack
 *
 * Description: holds variables
 */

typedef struct arg_s
{
	FILE *file_stream;
	char *text_line;
	unsigned int line_number;
	int num_tok;
	char **tok;
	instruction_t *line_instruc;
	stack_t *head;
	int stack_len;
	int stack;
}arg_t;

extern arg_t *arguments;

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

int dprintf(int fd, const char *format, ...);
ssize_t getline(char **text_lineptr, size_t *n, FILE *file_stream);
FILE *fdopen(int fd, const char *mode);

void test_arg(int argc);
void init_arg(void);
void end_malloc(void);
void end_get_stream(char *fileName);
void get_stream(char *fileName);
void free_arguments(void);
void free_args(void);
void token_break(void);
void handle_invalid_instruction(void);
void get_opcode(void);
void run_opcode(void);
void close_stream(void);
void free_tok(void);
void free_stack(stack_t *head);
int check_num(char *str);
void delete_stack_node(void);
void free_head_node(void);

#endif
