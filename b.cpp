#include <bits/stdc++.h>
using namespace std;
int g1 = 0;
int g2 = 0;
int g3;
int rec(int n)
{
	if (n == 3)
		return 0;
	int p;
	printf("(rec : %d) pointer -> %p\n", n, &p);
	return rec(n + 1);
}
int main()
{
	cout << "Stack : \n";
	rec(0);
	cout << "Heap : \n";
	int *h1 = (int *)malloc(sizeof(int));
	int *h2 = (int *)malloc(sizeof(int));
	int *h3 = (int *)malloc(sizeof(int));
	printf("h1 -> %p\n", h1);
	printf("h2 -> %p\n", h2);
	printf("h3 -> %p\n", h3);
	cout << "Data : \n";
	printf("g1 -> %p\n", &g1);
	printf("g2 -> %p\n", &g2);
	printf("g3 -> %p\n", &g3);
	//
	free(h1);
	free(h2);
	free(h3);
	return 0;
}