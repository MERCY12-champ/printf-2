#include "holberton.h"
#include <stdio.h>
/**
 * buf_init - Function that create a buffer at a default size of 1024
 *
 * Return: a pointer to a pointer.
 */
buffer *buf_new()
{
	buffer *buf;
	
	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = 1024;
	buf->str = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}
/**
 * buf_custom - Function that create a buffer at a custom
 * @size_uint
 *
 * Return: a pointer to a buffer
 */
buffer *buf_custom(size_t size_uint)
{
	buffer *buf;
	
	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = size_uint;
	buf->str = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}
/**
 * but_end - frees up the buffer.
 */
void buf_end(buffer *buf)
{
	if (!buf)
		return;
	free(buf->str);
	free(buf);
}

