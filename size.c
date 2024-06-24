#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){

	printf("char : %d\n",sizeof(char));
	printf("int : %d\n",sizeof(int));
	printf("short int :%d\n",sizeof(short int));
	printf("long int : %d\n",sizeof(long int));
	printf("long long int: %d\n",sizeof(long long int));
	printf("float : %d\n",sizeof(float));
	printf("double: %d\n",sizeof(double));
	printf("long double: %d\n", sizeof(long double));
        printf("char min: %d\n", CHAR_MIN);
	printf("char max: %d\n", CHAR_MAX);
	printf("SHORT INT min: %d\n",SHRT_MIN);
        printf("SHORT MAX: %d\n", SHRT_MAX);
        printf("INT MIN: %d\n", INT_MIN);
	printf("int max: %d\n", INT_MAX);
	printf("unsign int max: %d\n", UINT_MAX);
	printf("long min: %d\n", LONG_MIN);
	printf("long max: %d\n", LONG_MAX);
	printf("unsign long max: %d\n", ULONG_MAX);
	printf("float min: %d\n", FLT_MIN);
	printf("float_max: %d\n",FLT_MAX);
	printf("double min: %d\n",DBL_MIN);
	printf("double max, %d\n", DBL_MAX);





	  printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("UCHAR_MAX: %u\n", UCHAR_MAX);
    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("SHRT_MAX: %d\n", SHRT_MAX);
    printf("USHRT_MAX: %u\n", USHRT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("DBL_MAX: %e\n", DBL_MAX);
    printf("LDBL_MIN: %Le\n", LDBL_MIN);
    printf("LDBL_MAX: %Le\n", LDBL_MAX);

	return 0;
}

