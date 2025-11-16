#include "myheader.h"


//이진탐색(Binary Search): 각 단계에서 탐색하는 범위를 반씩 줄이는 방식.
//이진탐색은 반드시 정렬된 배열이 필요함.
int binarySearch(int* arr, int beginIdx, int endIdx, int target);
int binarySearchLoop(int* arr, int beginIdx, int endIdx, int target);



int main()
{
	int arr[100] = { 10,20,30,40,50,60,70,80,90,100 };
	int target;

	printf("찾을 값을 입력하세요.: ");
	scanf("%d", &target);

	//binarySearch함수: target이 존재하면 target의 인덱스를 리턴
	//target이 존재하지 않으면 -1을 리턴

	//배열, 첫번째 인덱스, 마지막 인덱스, 타켓
	//int idx = binarySearch(arr, 0, 9, target);
	int idx = binarySearchLoop(arr, 0, 9, target);

	if (idx == -1)
		printf("\n\n\t\t찾는 값은 존재하지 않습니다.\n");
	else
		printf("\n\n\t\t찾는 값은 arr[%d]에 저장되어 있습니다.",idx);


	return 0;
}

int binarySearch(int* arr, int beginIdx, int endIdx, int target)
{
	if (beginIdx > endIdx) //찾는값이 없는경우
		return 1;

	int midIdx = (beginIdx + endIdx) / 2;
	if (target == arr[midIdx])
		return midIdx; //찾는 값의 인덱스를 리턴

	else if (target > arr[midIdx])
		binarySearch(arr, midIdx + 1, endIdx, target);
	else
		binarySearch(arr, beginIdx, midIdx - 1, target);

	return 0;
}
//반복문
int binarySearchLoop(int* arr, int beginIdx, int endIdx, int target)
{
	if (beginIdx > endIdx) //찾는값이 없는경우
		return -1;

	
	while (beginIdx<=endIdx)
	{
		int midIdx = (beginIdx + endIdx) / 2;

		if (target == arr[midIdx])
			return midIdx;

		if (target > arr[midIdx])
			beginIdx = midIdx + 1;
		else
			endIdx = midIdx - 1;
	}
		 //찾는 값의 인덱스를 리턴

}