    #include<iostream>  
    #include<stack>  
    using namespace std;  
    int main(void)  
    {  
        stack<double>s;//定义一个栈  
        for(int i=0;i<10;i++)  
	{
            s.push(i);  
	    cout<<s.top()<<endl;
	}   
        cout<<"栈内的元素的个数为："<<s.size()<<endl;       
	while(!s.empty())  
        {  
            //printf("%lf\n",s.top());  
	    cout<<s.top()<<endl;
            s.pop();  
        }  
        cout<<"栈内的元素的个数为："<<s.size()<<endl;  
        return 0;  
    }  

