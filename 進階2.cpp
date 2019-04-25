#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char S[5000];
  printf("請輸入要轉換的英文字母:");
  while(scanf("%s",S)==1) //輸入字串 
      {
      	printf("處理過後的英文字母");
         int a,N=strlen(S); //用內建抓看輸入的字元個數 
         for(a=N-1;a>=0;a--)// 從後面開始輸出 
         printf("%c",S[a]);
          puts(""); 
      } 
 return 0;   
}
