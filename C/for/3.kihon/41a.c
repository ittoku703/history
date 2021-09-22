/*問2(7-1)*/
#include <stdio.h>
#include <string.h>

#define LEN 100  /*（注）#defineについては第18章を参照してください */

int main( void )
{
	char str_a[LEN+1] = ""; /* 文字列先頭に NUL設定 */
	char str_b[LEN+1] = "";

	while( strlen( str_b ) < 100 ) {
		printf( "文字列を入力してください" );
		scanf( "%s", str_a );
		strncat( str_b, str_a, LEN - strlen( str_b ) );
		printf( "\nstr = %s\n", str_b );
	}
	printf( "len = %lu\n", strlen( str_b ) );

	return 0;
}
