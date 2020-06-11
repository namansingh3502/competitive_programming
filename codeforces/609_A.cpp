#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int numb(int n,int b){
	int a,c=0,d=0;
	cout<<" b"<<b<<endl;

	for(int i=1;i<(b/2)+1;i++)
	{
		if(b%i==0)
		{
			c=c+1;cout<<i<<"c "<<c<<endl;
			if(c>=2){break;}
				
		}
	}
		cout<<"c "<<c<<endl;
	if(c==2)
	{
		a=n+b;
		cout<<"a "<<a<<endl;
		for(int i=1;i<(a/2)+1;i++)
		{
			if(a%i==0)
			{
				d+=1;
				if(d>2){break;}
				cout<<i<<"d "<<d<<endl;
			}

		}
		if(d>2){cout<<"a "<<a<<"b "<<b<<endl;}
	}
	else{return numb(n,b+1);}
	return 0;
}


int main(){
	int c=0,d=0;
	int a,b,n;
	n=1;
	srand(time(NULL));
	b=rand();
	cout<<"b "<<b<<endl;
	numb(n,b);
	return 0;

}
/*#include<iostream>
#include<time.h>
    #include<stdlib.h>
using namespace std;
void numb(long n,long b){
    long a,c=0,d=0;
    for(int i=1;i<(b/2)+1;i++)
    {
        if(b%i==0)
        {
            c=c+1;
            if(c>=2){break;}
                
        }
    }
    if(c==2)
    {
        a=n+b;
        for(int i=1;i<(a/2)+1;i++)
        {
            if(a%i==0)
            {
                d+=1;
                if(d>2){break;}
            }

        }
        if(d>2){cout<<a<<" "<<b<<endl;}
    }
    else{return numb(n,b+1);}
    
}


int main(){
    long c=0,d=0;
    long a,b,n;
    cin>>n;
    srand(time(NULL));
    b=rand();
    numb(n,b);
    return 0;

}

*/


