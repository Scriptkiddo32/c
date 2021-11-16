#include <stdio.h>
int main(){
	char str[100];
	int i;

	printf("enter  value:");
	scanf("%s %d",str,&i); //%s store string in str, #d store int in &i

	printf("\n You entered: %s %d \n", str, i);

	return 0;
}