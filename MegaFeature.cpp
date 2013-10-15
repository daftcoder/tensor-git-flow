/**
 * @fileoverview
 * It realizes a + a functional. 
 * @author delukinmv
 */
#include<cstdio>

// super procedure programming 
void read(int &v) {
	scanf("%d", &v);
}

int solve(int &v) {
	return 2*v; // new method realized in development! it's faster!
}

void write(int &v) {
	printf("%d", v);
}

int main() {
	int n, res;
	read(n);
	res = solve(n);
	write(res);
	return 0; 
} 
