#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Reverse String
//Input         :  Atharva       
//Output        :  avrahtA                                                                     
//Author        :  Prajwal Pradeep Kadam
//Date          :  25\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and convert it into 
upper case*/
int CountWhight(char *str)
{
      int iCnt=0;
       while(*str!='\0')
       {
             if(*str==' ') 
             {
                   iCnt++;
             }    
             str++;
       
      }
      return iCnt;
}




