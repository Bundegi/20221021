#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;

int main() {
	int N, L, W, H;
	cin >> N >> L >> W >> H;
	double minimum = 0;
	double maximum = max(L, max(W, H));
	double mid;
	for(int i=0;i<10000;i++){
		mid = (minimum + maximum) / 2;
		if ((long long)(L / mid) * (long long)(W / mid) * (long long)(H / mid) < N) maximum = mid;
		else minimum = mid;
	}
	printf("%.10lf", minimum);
}