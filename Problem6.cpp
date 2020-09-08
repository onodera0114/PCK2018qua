#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, input, q, x, y, ans = 0;
	bool z = false;
	vector <int> a;
	vector <int>b;
	cin >> n;

	for (int i = 1; i <= n; i++){
		cin >> input;
		a.push_back(input);
		b.push_back(input);
	}
	sort(b.begin(), b.end());
	for (int j = 0; j < b.size(); j++){
		if (a[j] != b[j]){
			z = false;
			break;
		}
		else{
			ans = 0;
			z = true;
		}
	}
	cin >> q;



	for (int i = 1; i <= q; i++){
		cin >> x >> y;
		int tmp = a[x - 1];
		a[x - 1] = a[y - 1];
		a[y - 1] = tmp;

		if (!z){
			for (int j = 0; j < b.size(); j++){
				if (a[j] != b[j]){
					z = false;
					break;
				}
				else{
					ans = i;
					z = true;
				}
			}
		}

	}

	if (!z)
		ans = -1;

	cout << ans << endl;

	return 0;
}