#include <bits/stdc++.h>
using namespace std;

//array insert
//array delete

class Array{
	int totalSize;
	int usedSize;
	int *arr;

public:
	Array(int totalSize){
		this -> totalSize = totalSize;
		this -> usedSize = 0;
		arr = new int[this -> totalSize];
		// unique_ptr<int[]> arr1(arr);
	}

	~Array(){
		delete[] this -> arr;
		cout << "Dynamics Array deleted" << endl;
	}

	const bool isEmpty(){
		if(usedSize <= 0) return true;
		return false;
	}

	const bool isFull(){
		if(usedSize >= totalSize) return true;
		return false;
	}

	void insertAtHead(const int& data){
		if(isFull()){
			cout << "Array Overflow" << endl;
			return ;
		}

		for(int i = usedSize; i >= 0; i--){
			arr[i+1] = arr[i];
		}

		arr[0] = data;
		++usedSize;
	}

	void insertAtEnd(const int& data){
		if(isFull()){
			cout << "Array Overflow" << endl;
			return ;
		}
		arr[usedSize++] = data;
	}

	void insertAtAnyPosition(const int& data, const int& position){
		if(isFull()){
			cout << "Array Overflow" << endl;
			return ;
		}

		if (position == 0){
			insertAtHead(data);
			return ;
		}
		if (position == usedSize){
			insertAtEnd(data);
			return ;
		}


		for(int i = usedSize; i >= position; i--){
			arr[i+1] = arr[i];
		}

		arr[position] = data;
		++usedSize;
	}

	void deleteFromHead(){
		if(isEmpty()){
			cout << "Array Underflow" << endl;
			return ;
		}

		for(int i=0; i<usedSize; i++){
			arr[i] = arr[i+1];
		}
		--usedSize;
	}

	void deleteFromEnd(){
		if(isEmpty()){
			cout << "Array Underflow" << endl;
			return ;
		}

		arr[--usedSize] = 0;
	}

	void deleteFromAnyPosition(const int& position){
		if(isEmpty()){
			cout << "Array Underflow" << endl;
			return ;
		}

		if (position == 0){
			deleteFromHead();
			return ;
		}
		if (position == usedSize){
			deleteFromEnd();
			return ;
		}

		for(int i=position; i<usedSize; i++){
			arr[i] = arr[i+1];
		}
		--usedSize;
	}




	void displayData(){
		for(int i=0; i<usedSize; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};

int32_t main(){

	// Array *arr = new Array(1000);
	const int totalSize = UINT16_MAX ;
	unique_ptr<Array> arr(new Array(totalSize));


	int data, position;

	data = 10; 
	arr -> insertAtEnd(data);

	data = 25; 
	arr -> insertAtEnd(data);

	data = 35; 
	arr -> insertAtEnd(data);

	data = 20; 
	arr -> insertAtHead(data);

	data = 15, position = 1;
	arr -> insertAtAnyPosition(data, position);
	arr -> displayData();

	arr -> deleteFromHead();
	arr -> deleteFromEnd();
	arr -> deleteFromAnyPosition(1); 
	
	arr -> displayData();

}