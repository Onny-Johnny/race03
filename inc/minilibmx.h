#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);

int mx_strcmp(const char *s1, const char *s2);

int mx_strlen(const char *s);

void mx_printchar(char c);

void mx_printstr(const char *s);

bool mx_isspace(char c);

bool mx_isdigit(int c);

int mx_atoi(const char *str);

bool is_num(const char *str);

void mx_printint(int n);

void mx_printerr(const char *s);

bool mx_iscard(char *c);

bool rank(char *c);

bool mast(char *c);

void print_mast(const char *s);

bool mx_ishight_rank(char *c);

char *mx_strnew(const int size);

void pr_r(const char *s);

bool mx_isupper(int c);

bool is_dch(char c);

bool no_dublicate(char *c1, char *c2, char *c3, char *c4, char *c5);

int two(char *c1, char *c2, char *c3, char *c4, char *c5);

int two_two(char *c1, char *c2, char *c3, char *c4, char *c5, int a);

int three(char *c1, char *c2, char *c3, char *c4, char *c5, int a);

int straight(char *c1, char *c2, char *c3, char *c4, char *c5, int a);

int high_convert(char *c);

bool is_straight(int a, int b, int c, int d, int e);

int flush(char *c1, char *c2, char *c3, char *c4, char *c5, int a);

bool is_flush(char a, char b, char c, char d, char e);

void ec(char c);

#endif
