#include <iostream>
using namespace std;

#include "Oval.h"

int main() {
	int w, h;
	Oval oval;

	cout << "변경 witch 입력 : ";
	cin >> w;
	cout << "변경 height 입력 : ";
	cin >> h;

	oval.set(w,h);
	oval.show();

	return 0;
}
