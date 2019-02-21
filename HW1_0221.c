#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int len)
{
    int i,j,key;
    for (i=1; i<len; i++)
    {
        key = arr[i];
        j=i-1;
        while((j>=0) && (arr[j]>key))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);

    }
}

void quick_sort(int left,int right)
    {
    int i,j,t,temp;
    if(left>right)
       return;

    temp=a[left]; //temp中存的就是基准数
    i=left;
    j=right;
    while(i!=j)
    {
       //顺序很重要，要先从右边开始找
       while(a[j]>=temp && i<j)
    j--;
       //再找右边的
       while(a[i]<=temp && i<j)
    i++;
       //交换两个数在数组中的位置
       if(i<j)
       {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
       }
    }
    //最终将基准数归位
    a[left]=a[i];
    a[i]=temp;

    quick_sort(left,i-1);//继续处理左边的，这里是一个递归的过程
    quick_sort(i+1,right);//继续处理右边的 ，这里是一个递归的过程

    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
    }

//void counting_sort()

int main()
{
    int num,i;
    int a[11],chose[5];
    for(i=0; i<10; i++)
    {
        num = ( rand() % 41 ) + 10;
        a[i]=num;
    }
     scanf("%c",&chose);
     if(chose[0]=='i')
     {
       insertion_sort(a,10);
     }
    if(chose[0]=='q')
    {
        quick_sort(a[0],a[9]);
    }
    if(chose[0]=='c')


    return 0;
}


