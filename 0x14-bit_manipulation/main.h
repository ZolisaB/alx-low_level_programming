#ifndef MAIN_H
#define MAIN_H

/*
 * fileName: main.h
 *
 * Description: this is a header file and it contains prototypes provided for each task in the 0x14-bit_manipulation derectory.
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
