#ifndef OVAL_H_
#define OVAL_H_

class Oval {
public:

	int width;
	int height;

	Oval();
	virtual ~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

#endif /* OVAL_H_ */
