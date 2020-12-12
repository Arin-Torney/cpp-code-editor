#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	string x;
	c:
	system("Color 0A");
	cout << "#include ";
	getline(cin, x);
	if (x == "") {
	}
	else {
		goto c;
	}
	d:
	system("Color 0C");
	cout << "using namespace ";
	getline(cin, x);
	if (x == "") {
	}
	else {
		goto d;
	}
	e:
	system("Color 0A");
	cout << "#define ";
	getline(cin, x);
	if (x == "") {
	}
	else {
		goto e;
	}
	while(x != "//exit") {
		getline(cin, x);
	}
	getch();
	return 0;
}
