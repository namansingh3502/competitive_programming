#include<iostream>
using namespace std;

int main(){

	int n,m_price;
	int a,b,c,d,ans=1;

	cin>>n;

	cin>>a>>b>>c>>m_price;
 
	int m_speed[]={ a, b, c };
	int m_hdd[] = { a, b, c };
	int m_ram[] = { a, b, c };

	for( int i = 1; i < n; i++ ){
		cin>>a>>b>>c>>d;

		if( m_speed[ 0 ] <= a || m_speed[ 1 ] <= b || m_speed[ 2 ] <= c ){
			m_speed[ 0 ] = a;
			m_speed[ 1 ] = b;
			m_speed[ 2 ] = c;

			if( m_price > d ){
				m_price = d;
				ans = i + 1;
			}
		}

		if( m_ram[ 0 ] <= a || m_ram[ 1 ] <= b || m_ram[ 2 ] <= c ){
			m_ram[ 0 ] = a;
			m_ram[ 1 ] = b;
			m_ram[ 2 ] = c;
		
			if( m_price > d ){
				m_price = d;
				ans = i + 1;
			}
		}
		if( m_hdd[ 0 ] <= a || m_hdd[ 1 ] <= b || m_hdd[ 2 ] <= c ){
			m_hdd[ 0 ] = a;
			m_hdd[ 1 ] = b;
			m_hdd[ 2 ] = c;
		
			if( m_price > d ){
				m_price = d;
				ans = i + 1;
			}
		}
	}

	cout<<m_speed[0]<<" "<<m_speed[1]<<" "<<m_speed[2]<<endl;
	cout<<m_ram[0]<<" "<<m_ram[1]<<" "<<m_ram[2]<<endl;
	cout<<m_hdd[0]<<" "<<m_hdd[1]<<" "<<m_hdd[2]<<endl;

	return 0;

}