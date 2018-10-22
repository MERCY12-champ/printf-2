#ifndef _GLOBAL_DEFINITIONS_H
#define _GLOBAL_DEFINITIONS_H

#include "global_definitions.h"

#endif

#ifndef STDLIB_H
#define STDLIB_H

#include <stdlib.h>

#endif

#ifndef STDARG_H
#define STDARG_H

#include <stdarg.h>

#endif

#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/**
 * struct buffer - structer for the write buffer.
 * @index - current index of the buffer.
 * @size - size of the buffer.
 * @str - pointer to memory that contains the content for this buffer.
 */
typedef struct print_buffer
{
	size_t index;
	size_t size;
	char *str;
} buffer;

buffer *buf_new();
buffer *buf_custom(size_t);
size_t buf_size(buffer *);
size_t buf_index(buffer *);
char *buf_content(buffer *);
void buf_write(buffer *);
void buf_end(buffer *);

typedef struct print_ops
{
	char *op;
	void (*fn)(buffer *, va_list);
} prtOp;

prtOp *prtOp_init();

void write_int(buffer *buf, va_list v_ls);
void append_num(buffer *buf, int num);

/* Martin Above / Samie Below */

int _printf(const char *format, ...);

int opid(buffer *buf, va_list v_ls, const char *src, int src_i);

void write_char(buffer *buf, va_list v_ls);

void write_str(buffer *buf, va_list v_ls);

void write_mod(buffer *buf, va_list v_ls);
#endif