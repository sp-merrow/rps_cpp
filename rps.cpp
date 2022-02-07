#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main() {
	const string valids[4] = {"1", "2", "3", "q"};

	while (true) {
		string selection;
		printf("Options:\n\n1. Rock\n2. Paper\n3. Scissors\n\nEnter 'q' to quit.");
		cin >> selection;
		while (selection.length() != 1 or find(begin(valids), end(valids), selection) == end(valids)) {
			printf("\nInvalid entry.");
			printf("\nOptions:\n\n1. Rock\n2. Paper\n3. Scissors\n\nEnter 'q' to quit.");
			cin >> selection;

		}
		if (selection == "q") {
			break;
		}
		botPLay = rand() % 3 + 1;
		
	}

	return 0;
}
