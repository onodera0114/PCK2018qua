#include  <iostream>

using namespace std;

int main(){
	int a, n, m;
	int count = 0;

	cin >> a >> n >> m;
	int i = 1;
	while (true){
		int tmp1 = 1;
		for (int j = 0; j < n; j++)
		{
			tmp1 *= i;
		}

		if (tmp1 > m){
			break;
		}

		int tmp2 = 0, tmp3 = tmp1;
		while(tmp3 != 0){
			tmp2 += tmp3 % 10;
			tmp3 /= 10;
		}

		if (i == tmp2 + a){
			count++;
		}
		i++;
	}

	cout << count << endl;

	return 0;
}