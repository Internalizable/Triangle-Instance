#include <iostream>

using namespace std;

int getMaxTriangleHeight(int base);
void buildTrianglePiece(int base, char usedChar);

int maxHeight{};

int main() {

	cout << "Please enter the width of the triangle's base (greater than one and odd)" << endl;

	int baseLength{};
	cin >> baseLength;

	if (!cin.good()) {
		cerr << "\aPlease type in a correct integer" << endl;
		cerr << "Re-running the application" << endl;

		main();

		return 0;
	}

	if (baseLength <= 1 || (baseLength % 2) == 0) {
		cerr << "\aPlease type in a correct positive odd integer" << endl;
		cerr << "Re-running the application" << endl;

		main();

		return 0;
	}

	char characterUsed{};
	cin >> characterUsed;

	maxHeight = getMaxTriangleHeight(baseLength);

	buildTrianglePiece(baseLength, characterUsed);
}

int getMaxTriangleHeight(int base) {
	int currentHeight{0};

	for (int startingInt = 1; startingInt <= base; startingInt = startingInt + 2) {
		++currentHeight;
	}

	return currentHeight;
}

void buildTrianglePiece(int base, char usedChar) {
	int currentHeight{ 0 };

	for (int startingInt = 1; startingInt <= base; startingInt = startingInt + 2) {
		++currentHeight;

		int getIndent{ maxHeight - currentHeight };

			for (int i = 1; i <= getIndent; ++i) {
				cout << " ";
			}

			for (int i = 1; i <= startingInt; ++i) {
				cout << usedChar;

				if (i == startingInt) {
					cout << endl;
				}
			}

		
	}
	
}
