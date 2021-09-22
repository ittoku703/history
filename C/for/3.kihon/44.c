/*問3(7-2)*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[128];
	long x = 0;
	int i = 0;

	printf( "16進数を入力：" );
	scanf( "%s", str );

	while ( str[i] != '\0' ) {
			if( isdigit(str[i]) != 0 ) {
				x = x * 16 + str[i] - '0';
			}
			else {
				str[i] = tolower( str[i] );
				x = x * 16 + str[i] - 'a' + 10;
			}
		else {
			printf( "10進数には変換できません\n" );
			return 0;
		}
		i++;
	}
	printf( "10進数：%ld\n", x );

	return 0;
}

/*strtol編*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(void){
  char str[150];
  long x = 0;

  printf("16進数入力 :");
  scanf("%s", str);

  x = strtol(str, NULL, 16);

  printf("%ld\n", x);

  return 0;
}
*/
/*sscanf編*/
/*
#include <stdio.h>
int main(void){
  char str[128];
  long x = 0;

  printf("16進数入力:");
  scanf("%s", str);

  sscanf(str, "%lx", &x);

  printf("10進数: %ld\n", x);

  return 0;
}
*/
