#include <iostream>
#include <string>
#include "ToDo.h"
using namespace std;

int main() {
	char next = 'y';
	int len = 0;
	int taskNum;
	string action;
	
	cout << "How long do you want your list? ";
	cin >> len;

	ToDo list(len);

	while (next != 'n') {
		cout << "Add to list (a)" << endl;
		cout << "Done list item (d)" << endl;
		cout << "Print list (p)" << endl;
		cout << "Exit list (x)" << endl;
		cout << "What do you want to do: ";
		cin >> next;


		switch (next) {
		case 'a':
			cout << "What do you need to do? ";
			cin.ignore();
			getline(cin, action);
			list.add(action);
			break;
		case 'd':
			cout << "Which number task do you want to take off? ";
			cin.ignore();
			cin >> taskNum;
			list.done(taskNum);
			break;
		case 'p':  
			list.print();
			break;
		case'x':   
			break;

		}
	}
}
