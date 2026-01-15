#include <iostream>
using namespace std;
class aditya{
    public:
	int length(const string& a) {
		int len = 0;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == ' ')
				len = 0;
			else
				len++;
		}

		return len;
	}
};

int main() {
	aditya adi;               
	cout << "The length of last word is " << adi.length("my name is adi") << endl;
	return 0;
}

