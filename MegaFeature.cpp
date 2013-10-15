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
	int res = 0;
	for(int i=0; i<2*v; ++i) {
		res = res + 1;
	}
	return res;
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
