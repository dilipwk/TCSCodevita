#include <stdio.h>
int main()
{
    int f;
    int b;
    int t;
    int d;
    int n;
    int i;
    int c;
    int count;
    int fcount;
    int bcount;
    int fwd;
    int bck;
    int tf;
    int tb;
    int fin;
	      int fans;
	      int bans;
	      int ans;
	      int cc;
	      int remain;
	    //  clrscr();
    scanf("%d", &n);
    if(n<=100 || n >=1)
	{
    for(i=0; i<n; i++)
		{
	    scanf("%d",&f);
	     scanf("%d",&b);
	      scanf("%d",&t);
	       scanf("%d",&d);
	       if(f>0 && b>0 && t>0 && d>0)
		{
	       c=0;
	       count=0;
	       fcount=0;
	       bcount=0;
	       fwd=0;
	       bck=0;
	       tf= t*f;
	       tb = t*b;

	      while(c<d)
	      {

		    fwd=bck+f;
		    bck=fwd-b;
		    count++;
		   c=bck+f;

		}
			 fans=count*tf;
			 bans=count*tb;
			  bcount=d-bck;
			  fcount=t*bcount;
			  ans=fans+bans+fcount;
	 printf("%d",ans);
	}
    }
  }
	return 0;
		}