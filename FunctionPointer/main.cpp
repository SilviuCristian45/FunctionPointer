#include <iostream>
using namespace std;

void procesareImagine(char **matrix , void(*lightManipulation)(), void(*setOpac)(int)) {
	for (int i = 0; i < 10; i++)
	{
		matrix[i] = new char [25];
		strcpy_s(matrix[i], 25, "pixel");
	}

	lightManipulation();
	setOpac(5);

	for (int i = 0; i < 10; i++)
	{
		cout << matrix[i] << "\n";
	}
}

void strongLight() {
	cout << "strong light " << endl;
}

void lowLight() {
	cout << "low light " << endl;
}

void setOpacity(int opacity) {
	cout << opacity + 2 << " \n";
}

int main() {
	int alpha;
	cin >> alpha;
	char** imag = new char*[10];

	(alpha < 5) ? procesareImagine(imag, &strongLight, &setOpacity) : procesareImagine(imag, &lowLight, &setOpacity);

	return 0;
}