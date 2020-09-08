#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, c, allcake = 0, input;
	cin >> n >> c;

	for (int i = 1; i <= c; i++){
		cin >> input;
		allcake += input;
	}

	if (allcake % (n + 1) == 0){
		cout << allcake / (n + 1) << endl;
	}
	else {
		cout << allcake / (n + 1) + 1 << endl;
	}

	return 0;
}