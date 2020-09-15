#pragma once
class  minimaxheap
{
public:
	int arr[100];
	int size;
	minimaxheap(int ori[]) {
		size = sizeof(ori);
		//array.
		//arr = ori;
		for (int i = 0; i < size / 2; i++) {
		
		}
	}

	//ÉÏÒÆ¶¯
	void siftup(int index) {
		int parentindex = index / 2;
		if (arr[parentindex] > arr[index]) {
			int temp = arr[index];
			arr[index] = arr[parentindex];
			arr[parentindex] = temp;
		}
	}

	void siftdown(int index) {
	
	}

private:

};

// minimaxheap:: minimaxheap()
//{
//}

 //minimaxheap::~ minimaxheap()
//{
//}