// 7、下面函数实现数组 a 元素的逆转，k为数组的元素个数。请填写空白处使其完整。

void recur(int a[], int k)
{
    if( k <= 1 )
        return;

    recur( a + 1 , k-2 );
    int  tmp;
    tmp = a[0];
    a[0] = a[k-1];
    a[k-1] = tmp;
}