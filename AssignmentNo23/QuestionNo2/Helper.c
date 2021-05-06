#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Display Small character
//Input         :  Atharva       
//Output        :  6                                                                   
//Author        :  Prajwal Pradeep Kadam
//Date          :  24\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
 Write a program which accept string from user and count number of small characters.*/
int CountSmall(char *str)
{
       int iCnt=0;
       if(str==NULL)
       {
              return 0;
       }
       while(*str!='\0')
       {
              if((*str>='a')&&(*str<='z'))
              {
              iCnt++;
              }
        str++;
       }
             return iCnt;
}
