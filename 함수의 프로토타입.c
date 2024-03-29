#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<string.h> // strlen()
#include<stdbool.h>

#define WIDTH 20
#define NAME "LIA KIM"
#define ADDRESS "Seoul, Korea"
void print_multiple_chars(char c, int n_stars, bool end1); // 프로토타입  
void print_centered_str(char str[]);

int main()
{
	print_multiple_chars('*', WIDTH, true); // actual (argument/parameter)
	
	print_centered_str(NAME);
	print_centered_str(ADDRESS);
	print_centered_str("i do love you");
	
	print_multiple_chars('*', WIDTH, false);

	return 0;	
}
void print_multiple_chars(char c, int n_stars, bool end1)  // formal (argument/parameter)
{
	int i;
	for(i = 0; i < n_stars; ++i)
		printf("%c",c); // putchar(c)도 가능 
	
	if(end1 == true)
		printf("\n");
	//printf("********************");
}
void print_centered_str(char str[])
{
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks, false);
	printf("%s\n",str);
}






























