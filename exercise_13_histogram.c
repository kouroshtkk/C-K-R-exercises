#include <stdio.h>

int main()
{
  int c;
  int word[10]={0};
  int i=0;
  while((c=getchar())!=EOF&&i<10)
    {
      if(c!=' '&&c!='\t'&&c!='\n')
	{
	  ++word[i];
	  while( (c=getchar())!=EOF && c!='\n' && c!='\t' && c!=' ')
	    {
	      ++word[i];
	    }
	  ++i;
	}
    }
  for(int i=0;i<10;++i)
    {
      printf("word %d :",i+1);
      for(int j=0;j<word[i];++j)
	{
	  printf("%d* ",j+1);
	}
      printf("\n");
    }
}
