
#include"Header.h"
int main()
{
      int *arr=NULL;
      int iSize=0,i=0,iRet=0;
      printf("Enter Number of Elements\n");
      scanf("%d",&iSize);
      arr=(int*)malloc(iSize*sizeof(int));
      if(arr==NULL)
      {
        printf("Unable allocate the memory\n");
        return -1;
      }

      printf("Enter The Elements\n");
      for(i=0;i<iSize;i++)
      {
        scanf("%d",&arr[i]);
      }
      iRet=Maximum(arr,iSize);
      printf("Maximum number is:%d\n",iRet);
      free(arr);
      return 0;
}