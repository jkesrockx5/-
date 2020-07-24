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
    j = 10000000;//1千萬次重複測試
    for(i=0;i<j;i++){  
    e = 0;//起始位置 
	int a[12]={10,5,9,7,1,4,10,6,0,3,8,2};//大富翁各格所對應尾數，10代表重抽 
	f=0;//初始化已抽出號碼數量 
    while (f<7){//假設各身分證尾數號碼數量相同，則共會抽出七個號碼 
	 z=0;
	 while(z==0){
		
		b = rand()%10; //隨機產生0-9的亂數 
		c = rand()%10; //隨機產生0-9的亂數
		while (b==c){  //確保兩顆球不相同 
		c = rand()%10;	
		}
    
	d = b+c;  //兩球號相加 
    d = d%10; //兩球相加的尾數為移動步數 
	
	while (d==0){ //尾數是零，重抽 
		b = rand()%10; //隨機產生0-9的亂數 
		c = rand()%10; //隨機產生0-9的亂數
		while (b==c){  //確保兩顆球不相同 
		c = rand()%10;	//隨機產生0-9的亂數
		}
		d = b+c;  //兩球號相加 
        d = d%10; //兩球相加的尾數為移動步數 
	}
	g=e+d; //最後一步位置 
	
	while(e<g){ //若走到已開出的號碼則跳過
	e++;
	while(a[e%12]==11){
		e++;
		g++;
	}	
	}
	e = e%12; //超過一圈重新開始 
	if(a[e]!=10){ //若非停留於重抽格，開出號碼 
	count[a[e]]++;//紀錄開出號碼 
	a[e]=11;
	z=1; 	}//號碼開出 
	}
	f++;//已開出號碼 +1 
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
