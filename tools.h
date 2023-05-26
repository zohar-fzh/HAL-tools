#ifndef TOOLS_H
#define TOOLS_H

#include <stdio.h>

int fputc(int c, FILE *stream);


void delay_init(void);
void delay_us(unsigned int nus);
void delay_ms(unsigned int nms);

#endif
