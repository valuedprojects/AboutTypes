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

        int a_int;
        float b_float;
        double c_double;
        long d_long;
        char e_array100[100];


	// Print types and sizes:
	printf("%s: Print data types and sizes\n", *argv);
	printf("short s1 = 0x1234..... >%d< >0x%04X<\n", s1, s1);
	printf("int i1 = 0x12345678..... >%d< >0x%08X<\n", i1, i1);
	printf("long long l1 = 0x1234567890123456LL..... >%lld< >0x%16llX<\n", l1, l1);
	printf("unsigned long long ul1 = 0x1234567890123456ULL..... >%llu< >0x%16llX<\n", ul1, ul1);
        printf("sizeof(char *): %ld\n", sizeof(char*));

        printf("sizeof(a_int): %lu\n",sizeof(a_int));
        printf("sizeof(b_float): %lu\n",sizeof(b_float));
        printf("sizeof(c_double): %lu\n",sizeof(c_double));
        printf("sizeof(d_long): %lu\n",sizeof(d_long));
        printf("sizeof(e_array100): %lu\n",sizeof(e_array100));

	return 0;
}
