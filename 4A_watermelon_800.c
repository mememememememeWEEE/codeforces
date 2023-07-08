#include <stdio.h>

int weight;

int main(void) {
	scanf("%d", &weight);
	if (weight == 2) printf("NO");
	else if (weight % 2 == 0) printf("YES");
	else printf("NO");
	return 0;
}
