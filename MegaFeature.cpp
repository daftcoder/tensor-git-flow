/**
 * @fileoverview
 * It realizes a + a functional. 
 * @author delukinmv
 */
#include<iostream>
using namespace std;

// super procedure programming 
void read(int &v) {
	cin >> v;
}

int solve(int &v) {
	return 2*v; // new method realized in development! it's faster!
}

void write(int &v) {
	cout << v;
}

/**
 * Users should be happy!
 */
void make_happy() {
   cout << "Wait for it..." << endl;
}

int main() {
	int n, res;
	read(n);
	make_happy();
	res = solve(n);
	write(res);
	return 0; 
} 
