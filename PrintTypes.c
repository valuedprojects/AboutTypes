// PrintTypes.c
// Demo sizes and printing of different integer prints.
#include <stdio.h>
int main (int argc, char** argv)
{
	short s1 = 0x1234;
	int i1 = 0x12345678;
	long long l1 = 0x1234567890123456LL;
	unsigned long long ul1 = 0x1234567890123456ULL;
        char * str;

	// Print types and sizes:
	printf("%s: Print data types and sizes\n", *argv);
	printf("short s1 = 0x1234..... >%d< >0x%04X<\n", s1, s1);
	printf("int i1 = 0x12345678..... >%d< >0x%08X<\n", i1, i1);
	printf("long long l1 = 0x1234567890123456LL..... >%lld< >0x%16llX<\n", l1, l1);
	printf("unsigned long long ul1 = 0x1234567890123456ULL..... >%llu< >0x%16llX<\n", ul1, ul1);
        printf("sizeof(char *): %ld\n", sizeof(char*));

	return 0;
}
