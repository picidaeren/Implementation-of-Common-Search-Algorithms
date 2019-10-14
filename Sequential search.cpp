/*核心：从数据的第一个元素开始，依次比较，直到找到目标数据或查找失败。

1.从表中的第一个元素开始，依次与关键字比较。

2.若某个元素匹配关键字，则 查找成功。

3.若查找到最后一个元素还未匹配关键字，则 查找失败。

时间复杂度：顺序查找平均关键字匹配次数为表长的一半，其时间复杂度为O(n)。

顺序查找的评估：顺序查找的优点是对表无要求，插入数据可在O(1)内完成。缺点是时间复杂度较大，数据规模较大时，效率较低。
*/

/*带哨兵*/
int search(vector<int> & num, int a) {
	num[0] = a;
	int i;
	for (i = num.size(); num[0] != num[i]; i--);

	return i;
}
/*不带哨兵*/
int search(vector<int>& num, int a) {
	for (int i = 0; i < num.size; i++) {
		if (a == num.at(i))
			return i;
	}

	return -1;
}


/* 二分查找，Array为数组，n为要查找的数组元素个数，key为要查找的关键字,left为范围左边界，right为范围右边界*/
 
/*二分查找，递归*/
 
int binarySearch1(int Array[],int left,int right,int key) {
 
    int mid = (right + left) / 2;
 
    if (Array[mid]==key)
 
        return mid;//查找成功返回
 
    else if (Array[mid]>key)
 
        binarySearch1(Array,left, mid - 1,key);//递归调用，在左半边查询
 
    else
 
        binarySearch1(Array, mid + 1,right,key);//递归调用，在右半边查询
 
}

//插值查找
 
int InsertionSearch(int Array[],int left,int right,int key) {
 
    int mid = left + (key - Array[left]) / (Array[right] - Array[left])*(right - left);//插值公式
 
    if (Array[mid] == key)
 
        return mid;
 
    if (Array[mid]>key)
 
        return InsertionSearch(Array, key, left, mid - 1);
 
    if (Array[mid]<key)
 
        return InsertionSearch(Array, key, mid + 1, right);
 
}





