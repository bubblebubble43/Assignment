#include<iostream>
using namespace std;

int totArray(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	return sum;
}
int avgArray(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	return sum / size;
}
int main() {
	int num[5];
	cout << "5개의 숫자를 입력하세요. : ";
	for (int i = 0; i < 5; ++i) {
		cin >> num[i];
	}
	int sum = 0;
	int avg = 0;
	sum = totArray(num, 5);
	avg = avgArray(num, 5);
	cout << "합계 : " << sum << endl;
	cout << "평균 : " << avg << endl;
	return 0;
}