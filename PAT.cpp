#include <stdio.h>
int yueshu(int n,int m)
{
    int min,max;
    min=n>m?n:m;
    max=n>m?m:n;
    int temp;
    while(min!=0)
    {
        temp=max%min;
        max=min;
        min=temp;
    }
    return max;
}
int main()
{
    int a,b,c,d;
    scanf("%d/%d %d/%d",&a,&b,&c,&d);
    int m1,m2,m3,m;
    m=yueshu(b,d);
    m2=a*m/b;
    m3=c*m/d;
    int t1,t2;
    t1=a/b;
    t2=c/d;
    int s1,s2,s3,s4;
    if(t1!=0)
    {
        if(a%b==0&&c%d!=0)
        {
            if(t2!=0)
            {
            	m1=m;
                printf("%d + %d %d/%d = ",t1,t2,c%d,d);
                int s1,s2;
                s1=t1+t2;
               printf("%d %d/%d\n",s1,c%d,d);
                
                printf("%d - %d %d/%d = ",t1,t2,c%d,d);
                s1=m2-m3;
                s2=yueshu(s1,m);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                s1=a*c;
                m1=b*d;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                 printf("%d * %d %d/%d = ",t1,t2,c%d,d);
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                
                 printf("%d / %d %d/%d = ",t1,t2,c%d,d);
                if(c==0)
                {
                    printf("Inf\n");
                }
                else{
                	 s1=a*d;
	                m1=b*c;
	                s2=yueshu(s1,m1);
	                s1=s1/s2;
	                m1=m1/s2;
                     if(s1/m1!=0)
                    {
                        if(s1%m1!=0)
                        printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                        else{
                            printf("%d\n",s1/m1);
                        }
                    }
                    else{
                        printf("%d/%d\n",s1,m1);
                    }
                }
            }
            else{
                printf("%d + %d/%d = ",t1,c,d);
                int s1,s2;
                s1=m2+m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                printf("%d - %d/%d = ",t1,c,d);
                s1=m2-m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                s1=a*c;
                m1=b*d;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                 printf("%d * %d/%d = ",t1,c,d);
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                 printf("%d / %d/%d = ",t1,c,d);
                if(c==0)
                {
                    printf("Inf\n");
                }
                else{
                	 s1=a*d;
	                m1=b*c;
	                s2=yueshu(s1,m1);
	                s1=s1/s2;
	                m1=m1/s2;
                     if(s1/m1!=0)
                    {
                        if(s1%m1!=0)
                        printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                        else{
                            printf("%d\n",s1/m1);
                        }
                    }
                    else{
                        printf("%d/%d\n",s1,m1);
                    }
                }
            }
            
        }
        else if(a%b!=0&&c%d==0)
        {
            
                printf("%d + %d  = ",t1,t2);
                int s1,s2;
                s1=m2+m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                printf("%d - %d = ",t1,t2);
                s1=m2-m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                s1=a*c;
                m1=b*d;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                 printf("%d * %d  = ",t1,t2);
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                 printf("%d / %d = ",t1,t2);
                if(c==0)
                {
                    printf("Inf\n");
                }
                else{
                	 s1=a*d;
	                m1=b*c;
	                s2=yueshu(s1,m1);
	                s1=s1/s2;
	                m1=m1/s2;
                     if(s1/m1!=0)
                    {
                        if(s1%m1!=0)
                        printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                        else{
                            printf("%d\n",s1/m1);
                        }
                    }
                    else{
                        printf("%d/%d\n",s1,m1);
                    }
                }
             
        }
        else if(a%b!=0&&c%d!=0)
        {
            
            if(t2!=0)
            {
                printf("%d %d/%d + %d %d/%d = ",t1,a%b,b,t2,c%d,d);
                int s1,s2;
                s1=m2+m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
               printf("%d %d/%d - %d %d/%d = ",t1,a%b,b,t2,c%d,d);
                s1=m2-m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                s1=a*c;
                m1=b*d;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                 printf("%d %d/%d * %d %d/%d = ",t1,a%b,b,t2,c%d,d);
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                printf("%d %d/%d / %d %d/%d = ",t1,a%b,b,t2,c%d,d);
                if(c==0)
                {
                    printf("Inf\n");
                }
                else{
                	 s1=a*d;
	                m1=b*c;
	                s2=yueshu(s1,m1);
	                s1=s1/s2;
	                m1=m1/s2;
                     if(s1/m1!=0)
                    {
                        if(s1%m1!=0)
                        printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                        else{
                            printf("%d\n",s1/m1);
                        }
                    }
                    else{
                        printf("%d/%d\n",s1,m1);
                    }
                }
            }
            else{
                printf("%d %d/%d + %d/%d = ",t1,a%b,b,c,d);
                int s1,s2;
                s1=m2+m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                printf("%d %d/%d - %d/%d = ",t1,a%b,b,c,d);
                s1=m2-m3;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                s1=a*c;
                m1=b*d;
                s2=yueshu(s1,m1);
                s1=s1/s2;
                m1=m1/s2;
                 printf("%d %d/%d * %d/%d = ",t1,a%b,b,c,d);
                if(s1/m1!=0)
                {
                    if(s1%m1!=0)
                    printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                    else{
                        printf("%d\n",s1/m1);
                    }
                }
                else{
                    printf("%d/%d\n",s1,m1);
                }
                 printf("%d %d/%d / %d/%d = ",t1,a%b,b,c,d);
                if(c==0)
                {
                    printf("Inf\n");
                }
                else{
                	 s1=a*d;
	                m1=b*c;
	                s2=yueshu(s1,m1);
	                s1=s1/s2;
	                m1=m1/s2;
                     if(s1/m1!=0)
                    {
                        if(s1%m1!=0)
                        printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                        else{
                            printf("%d\n",s1/m1);
                        }
                    }
                    else{
                        printf("%d/%d\n",s1,m1);
                    }
                }
  			}
        }
        else
        {
            
			
            
                printf("%d + %d  = ",t1,t2);
               
                    printf("%d\n",t1+t2);
                
                printf("%d - %d  = ",t1,t2);
                 printf("%d\n",t1-t2);
                 printf("%d * %d  = ",t1,t2);
                printf("%d\n",t1*t2);
                 printf("%d / %d  = ",t1,t2);
                if(c==0)
                {
                    printf("Inf\n");
                }
                else{
                	 s1=a*d;
	                m1=b*c;
	                s2=yueshu(s1,m1);
	                s1=s1/s2;
	                m1=m1/s2;
                     if(s1/m1!=0)
                    {
                        if(s1%m1!=0)
                        printf("%d %d/%d\n",s1/m1,s1%m1,m1);
                        else{
                            printf("%d\n",s1/m1);
                        }
                    }
                    else{
                        printf("%d/%d\n",s1,m1);
                    }
                }
            }
           
        }
    }

  //  return 0;}
