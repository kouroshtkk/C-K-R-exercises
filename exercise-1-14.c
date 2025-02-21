#include <stdio.h>

int main()
{
  int c;
  int chars[128]={0};
  while((c=getchar())!=EOF)
    {
      ++chars[c];
    }
  for(int i=0;i<128;++i)
    {
      printf("ASCII %d: %d \n",i,chars[i]);
    }
}
