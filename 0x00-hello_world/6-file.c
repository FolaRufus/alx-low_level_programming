#!/bin/bash

#include <stdio.h>
/**
 * main - prints the string
 * Return Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Sizeof a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long init: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}

