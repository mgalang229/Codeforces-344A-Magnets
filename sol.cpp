#include <bits/stdc++.h>

using namespace std;

int a[100000], n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 1;
	for(int i = 0; i < n-1; i++){
		if(a[i] != a[i+1]){
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
