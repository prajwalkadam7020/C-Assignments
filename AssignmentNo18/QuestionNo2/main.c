
#include"Header.h"
int main()
{
  int *arr=NULL;
  int iLength=0,i=0,iRet=0;
  printf("Enter The Number of elements:\n");
  scanf("%d",&iLength);

  arr=(int*)malloc(iLength * sizeof(int));
  printf("Enter elements:\n");

  for(i=0;i<iLength;i++)
  {
    scanf("%d",&arr[i]);
  }
  iRet=Frequency(arr,iLength);
  printf("Frequency of Even number is:%d\n",iRet);

  free(arr);
  return 0;
}