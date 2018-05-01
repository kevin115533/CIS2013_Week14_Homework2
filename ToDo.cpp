#include "ToDo.h"

using namespace std;

ToDo::ToDo() {
	ToDo(5);
}

ToDo::ToDo(int len) {
	length = len;
	list = new string[length];
}

ToDo::~ToDo() {
	delete[] list;
}

void ToDo::add(string item) {
	if (next < length) {
		list[next] = item;
		next++;
	}
}

void ToDo::done(int taskNum) {
	taskNum = taskNum - 1;
	for (int i = 0; i < next; i++) {
		if (taskNum == i) {
			list[i] = "";
		}
	}
}

void ToDo::print() {
	for (int i = 0; i < next; i++) {
		cout << i+1 << " " << list[i] << endl;
	}

}