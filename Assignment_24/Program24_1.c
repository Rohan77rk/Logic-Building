 #include<stdio.h>

 void DisplayASCII()
 {
    int iCnt = 0;
    printf("_____________________________________________________________________________________________\n");
    printf("-------------------------------------ASCII Table----------------------------------------------\n");

        printf("_____________________________________________________________________________________________\n");

        printf("Dec \t Char \t Hex \t Octal \t \n");

        for(iCnt = 0;iCnt <= 255;iCnt++)
        {
            printf("%d \t %c \t %x \t %o \t \n",iCnt,iCnt,iCnt,iCnt);
        }

 }

 int main()
 {
    DisplayASCII();

    return 0;
 }