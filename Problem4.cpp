#include <iostream>

using namespace std;

int main(){
	int a, b, x, x1, x2, ans = 0, pay = 0;
	cin >> a >> b >> x;
	
	if (x % 1000 != 0){
		x1 = x / 1000 + 1;
		pay = a * x1;
	}
	else{
		x1 = x / 1000;
		pay = a * x1;
	}

	if (x % 500 != 0){
		x2 = x / 500 + 1;
		if (pay > b * x2){
			pay = b * x2;
		}
	}
	else {
		x2 = x / 500;
		if (pay > b * x2){
			pay = b * x2;
		}
	}


	for (int i = 1; i <= x1 ; i++){
		for (int j = 1; j <= x2; j++){

			if (x <= i * 1000 + j * 500){
				ans = a * i + b * j;
				if (pay > ans){
					pay = ans;
				}

			}
		}
	}

	cout << pay << endl;
}