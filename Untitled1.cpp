#include <stdlib.h>
    #include <stdio.h>
    int main ()
    {
        FILE * fpPhoto, * fpText, * fpTarget ;
        int     iRead ;
        char    szBuf[100] ;
          
        printf ("�������һ���ļ�����jpg��:\n") ;
        gets (szBuf) ;
        fpPhoto = fopen (szBuf, "rb") ;
        printf ("������ڶ����ļ�����txt��:\n") ;
        gets (szBuf) ;
        fpText = fopen (szBuf, "rb") ;
        printf ("������Ŀ���ļ�����jpg��:\n") ;
        gets (szBuf) ;
        fpTarget = fopen (szBuf, "wb") ;
      
        if (!fpPhoto || !fpText || !fpTarget)
        {
            printf ("���ļ�ʧ�ܣ�\n") ;
            system("pause") ;
            return -1 ;
        }
      
        while ((iRead = fread (szBuf, 1, sizeof (szBuf), fpPhoto)) > 0)
            fwrite (szBuf, 1, iRead, fpTarget) ;
        while ((iRead = fread (szBuf, 1, sizeof (szBuf), fpText)) > 0)
            fwrite (szBuf, 1, iRead, fpTarget) ;
      
        fclose (fpPhoto) ;
        fclose (fpText) ;
        fclose (fpTarget) ;
        return 0 ;
    }
