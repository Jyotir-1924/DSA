#define d 256
bool search(string pat, string txt, int q) 
{ 
	int n=txt.length();
	int m=pat.length();
	int i,j;
	int p=0,t=0,h=1;
	
	for (i=0;i<m-1;i++)
        h=(h*d)%q;
    
    for (i=0;i<m;i++)
    {
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }
    
    for (i=0;i<=n-m;i++)
    {
        if (p==t)
        {
            bool flag=true;
            for (j=0;j<m;j++)
            {
                if (txt[i+j]!=pat[j])
                {
                    flag=false;
                    break;
                }
            }
            if (flag)
                return true;
        }
        
        if (i<n-m)
        {
            t=(d*(t-txt[i]*h)+txt[i+m])%q;
            if (t<0)
                t=(t+q);
        }
    }
    return false;
} 