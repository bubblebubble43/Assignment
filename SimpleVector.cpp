#include<iostream>

using namespace std;

template <typename T>
class SimpleVector {
protected:
	T* data;					// 타입에 의존하지 않고 데이터를 받는
	int currentSize;			// 원소의 개수
	int currentCapacity;		// 배열의 크기

public:
	//기본 생성자는 크기가 10인 배열을 만듬
	SimpleVector() : currentCapacity(10), currentSize(0) {
		data = new T[currentCapacity];
	}

	//숫자를 하나 받는 생성자는 해당 숫자에 해당되는 크기의 배열을 만듬
	SimpleVector(int capacity) : currentCapacity(capacity), currentSize(0) {
		data = new T[currentCapacity];
	}

	//소멸자
		~SimpleVector() {
		delete[] data;
	}

	//인자로 받은 원소를 맨 뒤에 추가(반환 x), 만약 크기가 꽉찼는데 원소가 더 들어오면 동작 x
	void push_back(const T& value) {
		if (currentSize < currentCapacity) {
			data[currentSize] = value;
			currentSize++;
		}
	}

	//벡터의 마지막 원소 제거, 만약 제거할 원소가 없으면 동작 x, 인자 및 반환값도 x
		void pop_back() {
		if (currentSize > 0) {
            currentSize--;
		}
	}

	//인자가 없고 현재의 원소의 개수를 반환
	int size() const {
		return currentSize;
	}

	//현재 내부 배열의 크기를 반환
	int capacity() const {
		return currentCapacity;
	}

};

int main() {
	// 배열의 맨 끝에 원소를 삽입/삭제 하는 기능이 요구사항에 맞게 동작하는지 확인
	SimpleVector<int> vec;

	// 원소 추가
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;

	
	
	// 원소 제거
	vec.pop_back();

	cout << "Size after pop_back: " << vec.size() << endl;

	return 0;
}