#include <iostream>    
#include <cstdlib> 
#include <time.h>

using namespace std; 

int main() { 
srand(time(NULL)*1000);
    double count[10]= {0};
    double max,min,mean,dif;
    int b,c,e,f,d,i,j,maxn,minn,g;
    bool z = 0;
    maxn=minn=0;
    j = 10000000;//1�d�U�����ƴ���
    for(i=0;i<j;i++){  
    e = 0;//�_�l��m 
	int a[12]={10,5,9,7,1,4,10,6,0,3,8,2};//�j�I�ΦU��ҹ������ơA10�N���� 
	f=0;//��l�Ƥw��X���X�ƶq 
    while (f<7){//���]�U�����ҧ��Ƹ��X�ƶq�ۦP�A�h�@�|��X�C�Ӹ��X 
	 z=0;
	 while(z==0){
		
		b = rand()%10; //�H������0-9���ü� 
		c = rand()%10; //�H������0-9���ü�
		while (b==c){  //�T�O�����y���ۦP 
		c = rand()%10;	
		}
    
	d = b+c;  //��y���ۥ[ 
    d = d%10; //��y�ۥ[�����Ƭ����ʨB�� 
	
	while (d==0){ //���ƬO�s�A���� 
		b = rand()%10; //�H������0-9���ü� 
		c = rand()%10; //�H������0-9���ü�
		while (b==c){  //�T�O�����y���ۦP 
		c = rand()%10;	//�H������0-9���ü�
		}
		d = b+c;  //��y���ۥ[ 
        d = d%10; //��y�ۥ[�����Ƭ����ʨB�� 
	}
	g=e+d; //�̫�@�B��m 
	
	while(e<g){ //�Y����w�}�X�����X�h���L
	e++;
	while(a[e%12]==11){
		e++;
		g++;
	}	
	}
	e = e%12; //�W�L�@�魫�s�}�l 
	if(a[e]!=10){ //�Y�D���d�󭫩��A�}�X���X 
	count[a[e]]++;//�����}�X���X 
	a[e]=11;
	z=1; 	}//���X�}�X 
	}
	f++;//�w�}�X���X +1 
	}
	}
    
    cout<<"0 "<<count[0]/j*100<<"%"<<endl;
    cout<<"1 "<<count[1]/j*100<<"%"<<endl;
    cout<<"2 "<<count[2]/j*100<<"%"<<endl;
    cout<<"3 "<<count[3]/j*100<<"%"<<endl;
    cout<<"4 "<<count[4]/j*100<<"%"<<endl;
    cout<<"5 "<<count[5]/j*100<<"%"<<endl;
    cout<<"6 "<<count[6]/j*100<<"%"<<endl;
    cout<<"7 "<<count[7]/j*100<<"%"<<endl;
    cout<<"8 "<<count[8]/j*100<<"%"<<endl;
    cout<<"9 "<<count[9]/j*100<<"%"<<endl;
    max = count[0];
    min = count[0];
    for(i=1;i<9;i++){
    	if(count[i]>max){max=count[i];maxn=i;
		}
		if(count[i]<min){min=count[i];minn=i;
		}
	}
mean = max+min;
//mean = mean/2;
dif  = max-min;
//dif  = dif/min;
//dif  = dif/100;
dif = dif/mean/100;
cout<<"max "<<maxn<<endl;
cout<<"min "<<minn<<endl;
cout<<"uniformity "<<dif<<"%"<<endl;
    return 0; 
}
