#include<iostream>
using namespace std;
void citire(int*,int);
void functie(int *, int , int , int );
int main()
{
	int m,n,p,*v;
	cin>>m>>n>>p;
	v = new int [n];
	citire(v,n);

   functie(v,m,n,p);



    delete []v;
}
void citire(int *v,int m)
{  int i=1;
	for(i=1;i<=m;i++)
	 v[i] = 1;
}

void functie(int *v, int m, int n, int p)
{  int i,j,k=1,cnt=0;
      
       for(i=p;i<=n;i++)
        {  
           if(i==n && k==3 && v[i]!=0) { i=1;
		                                v[i]=0;
									   cnt++;
									    
										}
			
           
            if(i==n && k<3 ) {i=1;
                       
                                 }
		   if(k==3 && v[i]!=0) {   v[i]=0; 
								   cnt++;
								   k=0;
								   }
								   
         cout<<i<<" ";
         k++;
         if(cnt==n-1) break;
	 } 
	 
	 cout<<endl;
	 for(i=1;i<=n;i++)
	  if(v[i]==1) cout<<i<<endl;
	   for(i=1;i<=n;i++)
	    cout<<v[i]<<" ";
}

