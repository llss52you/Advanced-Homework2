#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char S[5000];
  printf("�п�J�n�ഫ���^��r��:");
  while(scanf("%s",S)==1) //��J�r�� 
      {
      	printf("�B�z�L�᪺�^��r��");
         int a,N=strlen(S); //�Τ��ا�ݿ�J���r���Ӽ� 
         for(a=N-1;a>=0;a--)// �q�᭱�}�l��X 
         printf("%c",S[a]);
          puts(""); 
      } 
 return 0;   
}
