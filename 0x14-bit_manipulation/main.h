#ifndef MAIN_H
#define MAIN_H

/*
 * fileName: main.h
 *
 * Description: header file containing prototypes.
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endiannes(void);
int _putchar(char c);
#endif /* MAIN_H*/
