/*
����һ�������㷨�ܽ�ĳ���
����
1.ð������Bubble Sort��
2.ѡ������Selection Sort��
3.��������Insertion Sort��
4.ϣ������Shell Sort��
5.�鲢����Merge Sort��
6.������Heap Sort��
7.��������Quick Sort��
���������㷨������int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 ,10}������ 
 */

#include<stdio.h>
#include<stdlib.h>

//�������� 
void bubbleSort(int a[],int len);
void selectionSort(int a[],int len);
void insertionSort(int a[],int len);
void shellSort(int a[],int len);
void mergeSort(int a[], int len);
void Merge(int A[], int left, int mid, int right);
void heapSort(int a[],int len);
void quickSort(int a[], int left, int right);

int main(void){
	//AΪҪ��������� 
	int A[] = { 6, 5, 3, 1, 8, 7, 2, 4,10 };
	printf("ԭʼ����Ϊ��\n");
	int lengthA = 9;
	for(int i = 0 ; i<lengthA;i++){
		printf("%d ",A[i]);
	}
	printf("\n\n");
	//����ִ�и������� 
//	bubbleSort(A,lengthA);
//	selectionSort(A,lengthA);
//	insertionSort(A,lengthA);
//	shellSort(A,lengthA);
//	mergeSort(A,lengthA);
//	heapSort(A,lengthA);
	quickSort(A,0,lengthA-1);
	printf("��������Ľ����\n");
	for(int i = 0 ; i< lengthA; i++){
	printf("%d ",A[i]);
	}
	printf("\n\n");
	
	return 0;
}

/*
ð������
����˼�룺���������Ƚϣ��ϴ���³�����С������
��һ��֮����С�����ͱ��ŵ���һ��λ��
...... 
�Ż���
��ĳһ������֮���Ѿ��ź�����û��Ҫ���е�
len-1�Σ�
����һ��flag��û�н���֮���û��Ҫ�ٽ�����ȥ�� 
*/
void bubbleSort(int a[],int length){
	int len =length;
	int temp;//�м���� 
	bool flag;//�Ż��ı�־ ,�Ƿ��н��� 
	for(int i = 0; i<len; i++){
		flag = false;
		for(int j = len - 1; j>i;j--){
			if(a[j]<a[j-1]){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
				flag = true;
			}
		}
		if(!flag) break;
	}
	printf("ð������Ľ����\n");
	for(int i = 0 ; i< len; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");
	
}

/*
ѡ������
����˼�룺һ��ʼ��ԭʼ�������ҵ���С��Ԫ�أ��ŵ����е���ʼλ����Ϊ��
		�������У�Ȼ���ڴ�ʣ�µ�δ���е�Ԫ���м���Ѱ����СԪ�أ��ŵ���
		���������ĩβ....ֱ������Ԫ���������
 */
void selectionSort(int a[],int length){
	int len = length;
	int minIndex;
	int temp;
	for(int i = 0;i<len;i++){
	//i�������е����е�ĩβ
		minIndex = i;
		for(int j = i+1;j<len;j++){
			if(a[j]<a[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex != i){
			temp = a[i];
			a[i] = a[minIndex];
			a[minIndex] = temp;
		} 	
	}
	printf("ѡ������Ľ����\n");
	for(int i = 0 ; i< len; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");
}

/*
��������
����˼�룺
��Ҫ�����һ�����У��ٶ�ǰn-1�����Ѿ��ź������ڽ���n�����嵽ǰ������������У�
ʹ����n����Ҳ���ź�˳��ġ���˷���ѭ����ֱ��ȫ���ź�˳�� 
����������ʵ���ϣ�
������in-place��������ڴӺ���ǰɨ������У�
��Ҫ������������Ԫ�������Ųλ��Ϊ����Ԫ���ṩ����ռ䡣
���������㷨�������£�
�ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
ȡ����һ��Ԫ�أ����Ѿ������Ԫ�������дӺ���ǰɨ��
�����Ԫ�أ������򣩴�����Ԫ�أ�����Ԫ���Ƶ���һλ��
�ظ�����3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ��
����Ԫ�ز��뵽��λ�ú�
�ظ�����2~5 
*/
void insertionSort(int a[], int length){
	int len = length;
	int temp;
	int i;//���ź�������е���һ��Ԫ�أ�����Ԫ�أ����±� 
	int j;//�������е�ĩβ�±� 
	for(i = 1;i<len;i++){
		temp = a[i];//�м���� 
		j=i-1;
		while(j >= 0&&a[j]>temp){//�����������У���Ҫ�����Ԫ�رȽ� 
			a[j+1] = a[j];//��Ԫ�غ��ƣ�������������һ��λ��
			j--; 
		}
		a[j+1] = temp; //����  
	}
	printf("��������Ľ����\n");
	for(int i = 0 ; i< len; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");
	
}

/*
ϣ������
����������ָ�Ϊ���ɸ������У������в�����ηָ�ģ�
��������ض��������������У��Ը��������н��в�������
Ȼ����ѡ��һ����С���������ٽ�����ָ�Ϊ��������н�������
......���ѡ������Ϊ1����ʹ��ֱ�Ӳ�������ʹ���������Ϊ����
������ѡ����ÿ�˵�������̶���һ��������
��������һ������ ������ϵ d[1] > d[2] > d[3] >..> d[t] = 1 (t������)��
���Ĳ�����ѡ����Ϊn/2,�Դ˵��ƣ�ÿ������Ϊԭ�ȵ�1/2��ֱ������Ϊ1�� 
ϣ�����������ڷ����������
example��
49��38��65��97��76��13��27��49��55��04��
�������е�ȡֵ����Ϊ��
5��3��1
��һ�������
|                    | 
--------------------- 
    |                   |
	-------------------- 
���������� 
13��27��49��55��04��49��38��65��97��76
�ڶ��������
|           |           |           | 
-------------------------------------
    |           |           |
	------------------------
������������
13��04��49��38��27��49��55��65��97��76 
*/
void shellSort(int a[],int len){
	int incre=len;//��������
	int temp;
	while(true){
		incre /=2;
		for(int k=0;k<incre;k++){
			for(int i = k+incre;i<len;i+=incre){
				//������ѭ������ 
				for(int j = i;j>k;j-=incre){
					if(a[j]<a[j-incre]){
						temp = a[j-incre];
						a[j-incre]=a[j];
						a[j]=temp;
					}
				} 
			}
		}
		if(incre == 1)
			break;
	}
	printf("ϣ������Ľ����\n");
	for(int i = 0 ; i< len; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");	
}

/*
�鲢����
�鲢�����ʵ�ַ�Ϊ�ݹ�ʵ����ǵݹ�(����)ʵ�֡�
�ݹ�ʵ�ֵĹ鲢�������㷨����з��β��Եĵ���Ӧ�ã�
���ǽ�һ��������ָ��С����ֱ�����Ȼ��������С����Ĵ���������������⡣
�ǵݹ�(����)ʵ�ֵĹ鲢�������Ƚ����������鲢��
Ȼ�����Ĺ鲢��Ȼ���ǰ˰˹鲢��һֱ��ȥֱ���鲢���������顣
�鲢�����������£�
����ռ䣬ʹ���СΪ�����Ѿ���������֮�ͣ��ÿռ�������źϲ��������
�趨����ָ�룬���λ�÷ֱ�Ϊ�����Ѿ��������е���ʼλ��
�Ƚ�����ָ����ָ���Ԫ�أ�ѡ�����С��Ԫ�ط��뵽�ϲ��ռ䣬���ƶ�ָ�뵽��һλ��
�ظ�����3ֱ��ĳһָ�뵽������β
����һ����ʣ�µ�����Ԫ��ֱ�Ӹ��Ƶ��ϲ�����β 
*/
void mergeSort(int a[],int len){
	int left,mid,right;//ǰһ������Ϊa[left...mid],��һ��...
	for(int i=1;i<len;i*=2){
		left = 0;
		while(left+i<len){//����һ����������ڣ���Ҫ�鲢 
			mid=left+i-1;
			right = mid +i<len?mid+i:len-1;//��һ����������ܲ���
			Merge(a,left,mid,right);
			left = right +1;//ǰһ����������������ƶ� 
		}
	} 
	printf("�鲢����Ľ����\n");
	for(int i = 0 ; i< len; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");	
	
}

// �ϲ��������ź��������A[left...mid]��A[mid+1...right]
void Merge(int A[], int left, int mid, int right)
{
    int len = right - left + 1;
    int *temp = new int[len];       // �����ռ�O(n)
    int index = 0;
    int i = left;                   // ǰһ�������ʼԪ��
    int j = mid + 1;                // ��һ�������ʼԪ��
    while (i <= mid && j <= right)
    {
        temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];  // ���Ⱥű�֤�鲢������ȶ���
    }
    while (i <= mid)
    {
        temp[index++] = A[i++];
    }
    while (j <= right)
    {
        temp[index++] = A[j++];
    }
    for (int k = 0; k < len; k++)
    {
        A[left++] = temp[k];
    }
}

/*
������
����һ�ֽ�����ȫ�������Ľṹ��ͨ������ͨ��һά������ʵ�ֵģ���
���������ʣ������ѣ�Ҳ�д���ѡ��󶥶ѣ�Ϊ����
���и�����ֵ���Ǵ������ĺ��ӽڵ㡣
������Ĺ��̣�
��������������鹹��һ�����ѣ���Ϊ��ʼ��������
�ѶѶ�Ԫ�أ����ֵ���Ͷ�βԪ�ػ���
�Ѷѣ����������ĳߴ���С1��������heapify(A, 0)���µĶѶ�Ԫ�ؿ�ʼ���жѵ���
�ظ�����2��ֱ���ѵĳߴ�Ϊ1
*/

void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void Heapify(int A[], int i, int size)  // ��A[i]���½��жѵ���
{
    int left_child = 2 * i + 1;         // ��������
    int right_child = 2 * i + 2;        // �Һ�������
    int max = i;                        // ѡ����ǰ����������Һ�������֮�е����ֵ
    if (left_child < size && A[left_child] > A[max])
        max = left_child;
    if (right_child < size && A[right_child] > A[max])
        max = right_child;
    if (max != i)
    {
        Swap(A, i, max);                // �ѵ�ǰ�����������(ֱ��)�ӽڵ���н���
        Heapify(A, max, size);          // �ݹ���ã������ӵ�ǰ������½��жѵ���
    }
}

int BuildHeap(int A[], int n)           // ���ѣ�ʱ�临�Ӷ�O(n)
{
    int heap_size = n;
    for (int i = heap_size / 2 - 1; i >= 0; i--) // ��ÿһ����Ҷ��㿪ʼ���½��жѵ���
        Heapify(A, i, heap_size);
    return heap_size;
}


void heapSort(int a[],int len){
	int heap_size = BuildHeap(a, len);    // ����һ������
	while (heap_size > 1) // �ѣ���������Ԫ�ظ�������1��δ�������
    {
        // ���Ѷ�Ԫ����ѵ����һ��Ԫ�ػ��������Ӷ���ȥ�����һ��Ԫ��
        // �˴������������п��ܰѺ���Ԫ�ص��ȶ��Դ��ң����Զ������ǲ��ȶ��������㷨
        Swap(a, 0, --heap_size);
        Heapify(a, 0, heap_size);     // ���µĶѶ�Ԫ�ؿ�ʼ���½��жѵ�����ʱ�临�Ӷ�O(logn)
    }
    printf("������Ľ����\n");
	for(int i = 0 ; i< len; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");	
}

/*
��������
ʹ�÷��β�������һ�����з�Ϊ���������С�
����Ϊ��
������������һ��Ԫ�أ���Ϊ"��׼"(pivot).
�����бȻ�׼ֵС��Ԫ�ط��ڻ�׼ǰ�棬
���бȻ�׼ֵ���Ԫ�ط��ڻ�׼�ĺ��棨��ͬ�������Ե���һ�ߣ���
�����Ϊ����(partition)������
��ÿ�������ݹ�ؽ��в���1~2���ݹ�Ľ������������еĴ�С��0��1��
��ʱ�����Ѿ����ź����ˡ�
*/
int Partition(int A[], int left, int right)  // ���ֺ���
{
    int pivot = A[right];               // ����ÿ�ζ�ѡ�����һ��Ԫ����Ϊ��׼
    int tail = left - 1;                // tailΪС�ڻ�׼�����������һ��Ԫ�ص�����
    for (int i = left; i < right; i++)  // ������׼���������Ԫ��
    {
        if (A[i] <= pivot)              // ��С�ڵ��ڻ�׼��Ԫ�طŵ�ǰһ��������ĩβ
        {
            Swap(A, ++tail, i);
        }
    }
    Swap(A, tail + 1, right);           // ���ѻ�׼�ŵ�ǰһ��������ĺ�ߣ�ʣ�µ���������Ǵ��ڻ�׼��������
                                        // �ò������п��ܰѺ���Ԫ�ص��ȶ��Դ��ң����Կ��������ǲ��ȶ��������㷨
    return tail + 1;                    // ���ػ�׼������
}

void quickSort(int a[],int left,int right){
	if (left >= right)
		return;
    int pivot_index = Partition(a, left, right); // ��׼������
    quickSort(a, left, pivot_index - 1);
    quickSort(a, pivot_index + 1, right);
}
