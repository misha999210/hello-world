#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
void Fillfg(char A[], char h[], int& i);
void Fillfgs(char A[], char h[]);
void Fillxch(char A[], char h[], int& i);
void Fillych(char A[], char h[], int& i);
void Fillrch(char A[], char h[], int& i);
int main() {
	char ch[100], xch[10], ych[10], rch[10], fg[10], f[7];
	strcpy(f, "circle");
	double s = 0, p = 0;
	int i = 0, r;
	printf("Vvedite 'circle(x,y,r)'\n \n");
	cin >> ch;
	memset(fg, 0, sizeof(fg));
	memset(xch, 0, sizeof(xch));
	memset(ych, 0, sizeof(ych));
	memset(rch, 0, sizeof(rch));
	Fillfg(fg, ch, i);
	while (1) {
		if (strcmp(f, fg) == 0) {
			break;
		}
		memset(ch, 0, sizeof(ch));
		memset(fg, 0, sizeof(fg));
		printf("Error, please Enter 'circle(x,y,r)'\n");
		cin >> ch;
		Fillfgs(fg, ch);
		puts(ch);
	}
	Fillxch(xch, ch, i);
	Fillych(ych, ch, i);
	Fillrch(rch, ch, i);
	r = atoi(rch);
	s = r * r * M_PI;
	printf("Area = %.4f", s);
	p = 2 * M_PI * r;
	printf("\nPerimetr= %.4f\n", p);
}
