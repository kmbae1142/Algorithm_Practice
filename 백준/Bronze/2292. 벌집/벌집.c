#include <stdio.h>

int main() {

	int N, start = 1, end = 1, i = 1;
	scanf("%d", &N);

	while (!(start <= N && N <= end)) {
		if (N == 1) { break; }
		if (i == 1) start += 1;
		else start += 6 * (i - 1);
		end += 6 * i;
		i++;
	}
	
	printf("%d\n", i);

}