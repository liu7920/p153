#include <iostream>
using namespace std;

#include "Oval.h"

Oval::Oval() {
	// TODO Auto-generated constructor stub
	width=1;
	height=1;
	cout << "1로 초기화" << endl;
	cout << "width = " << width << endl;
	cout << "height = " << height << endl;
}

Oval::~Oval() {
	// TODO Auto-generated destructor stub
	cout << "소멸자" << endl;
	cout << "width = " << width << endl;
	cout << "height = " << height << endl;
}

int Oval::getWidth(){
	return width;
}

int Oval::getHeight(){
	return height;
}

void Oval::set(int w, int h){
	width = w;
	height = h;
}

void Oval::show(){
	cout << "최종 출력" << endl;
	cout << "width = " << width << endl;
	cout << "height = " << height << endl;
}
