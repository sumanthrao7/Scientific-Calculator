#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cctype>
#include<cmath>
using namespace std;

int main ()
{
 char choice;
 
 char arithmeticChoice;
 char trignometricChoice;
 char logarithmicChoice;
 char powerChoice;
 
 int a,b;
 int result;
 
 double a1,b1;
 double result1;
 
 cout<<"\n\n\n ***************** SCIENTIFIC CALCULATOR ****************** \n\n\n";
	do
 	{
        cout<<"\t 1 : Arithmetic Operations \n";
 		cout<<"\t 2 : Trigonometric Functions \n";
 		cout<<"\t 3 : Logarithmic Functions \n";
 		cout<<"\t 4 : Power Functions \n";
 		cout<<"\t 5 : Exit... \n";
 		choice = getchar();

		// Switch case for Base operations- Arithmetic, Tirgnometric, Logarithmic and Power Functions
	 	switch(choice)
	 	{
			case '1':
	 	 	{
	          cout<<"\n\n";
	          cout<<"1 : Addition \n";
	          cout<<"2 : Subtraction \n";
	          cout<<"3 : Multipilication \n";
	          cout<<"4 : Division \n\n";
	          
	          arithmeticChoice = getchar();
	          
	          	// Switch case for Arithmetic Operations - Add, Subtract, Multiply, Division
	             switch(arithmeticChoice)
	              {
	                case '1':
	                         {
	                            cout<<"\n\nEnter first number";
	                            cin>>a;
	                            cout<<"Enter second number";
	                        	cin>>b;
	                        	
	                        	result = a+b;
	                        	cout<<"\n\nResult of addition = "<<result<<endl;
	                        	system("pause");
	                        	break;
	                          }                 
	                case '2':
	                     	 {
	                   			  cout<<"\n\nEnter first number.";
	                              cin>>a;
	                              cout<<"Enter second number.";
	                        	  cin>>b;
	                        	
	                   			  result = a-b;
	                   			  cout<<"\n\nResult of subtraction = "<<result<<endl;
	                   			  system("pause");
	                              break;
	                        }
	
	                case '3':
	                         {
	                   			  cout<<"\n\nEnter first number.";
	                              cin>>a;
	                              cout<<"Enter second number.";
	                        	  cin>>b;
	                        	  
	                   			  result = a*b;
	                   			  cout<<"\n\nResult of multiplication = "<<result<<endl;
	                              system("pause");
	                              break;
	                  		 }
	                
	                case '4':         
	                          {
	                      		  cout<<"\n\nEnter first number...";
	                   			  cout<<"\n\nEnter first number.";
	                              cin>>a;
	                              cout<<"Enter second number.";
	                        	  cin>>b;
	                      			if(a!=0)
	                       			{
	                        			result = a/b;
	                          			cout<<"\n\nResult of division = "<<result<<endl;
	                          			system("pause");
	                       			}
	                       			else
	                       			{
	                       				cout<<"Division by zero is not allowed"<<endl;
									}
	                       			
	                             	break;
	                          }
	                    
	              }
	              break;
	        }
	
	 		case '2':
	         {
	          	cout<<"\n\n";
	    		cout<<"1 : Sin function \n";
	          	cout<<"2 : Cos function \n";
	          	cout<<"3 : Tan function \n";
	    		trignometricChoice = getchar();
	    		
	    		// Switch case for Tirgnometric Operations - Sin, Cos, Tan
	    		switch(trignometricChoice)
	    		{
	    			case '1':
	     			{
	     				cout<<"\n\n Enter a number...";
	     				cin>>a1;
	  
	     				result1=(sin(a1));
	     				cout<<"\n\nResult = "<<result1<<endl;
	     				system("pause");
	                 	break;
	     			}
	    			case '2':
	    	 		{
	    				cout<<"\n\n Enter a number...";
	     				cin>>a1;
	                                 
						result1=(cos(a1));
	      				cout<<"\n\nResult = "<<result1<<endl;
	      				system("pause");
	      				break;
	     			}
	    			case '3':
	     			{
	    				cout<<"\n\n Enter a number...";
	     				cin>>a1;
	                 	
						result1=(tan(a1));
	      				cout<<"\n\nResult = "<<result1<<endl;
	                    system("pause");
	      				break;
	     			}
	   			}
	    		break;
	         }
	    	case '3':
	         {
	           cout<<"\n\n";
	    	   cout<<"1 : Natural log\n";
	    	   cout<<"2 : log with base 10 \n";
	           
			   logarithmicChoice = getchar();
			   
			   // Switch case for Logarithmic Operations - Natural log and Logarithm to Base 10
	    	   switch(logarithmicChoice)
	           {
	    			case '1':
	     			{
	    				cout<<"\n\n Enter a number...";
	     				cin>>a1;
	                                 
						result1=log(a1);
	    				cout<<"\n\n Result = "<<result1<<endl;
	    				system("pause");
	    				break;
	   				}
	    			case '2':
	     			{
	     				cout<<"\n\n Enter a number...";
	     				cin>>a1;
	            		
						result1= log10(a1);
	     				cout<<"\n\n Result = "<<result1<<endl;
	     				system("pause");
	     				break;
	     			}
	           }
	           break;
	         }
	    	case '4':
	         {
	    			cout<<"1) Press 1 for Power \n";
	    			cout<<"2) Press 2 for Square root \n";
	    			cout<<"Enter your choice....";
	    			
					powerChoice = getchar();
					
					// Switch case for Power and Square root of a number
	   				switch(powerChoice)
	    			{
	    				case '1':
	     				{
	      					cout<<"\n\nEnter a number...";
	      					cin>>a1;
	      					
							cout<<"Enter power...";
	      					cin>>b1;
	      					
							result1=pow(a1,b1);
	      					cout<<"\n\nResult = "<<result1<<endl;
	      					system("pause");
	      					break;
	     				}
	    				case '2':
	     				{
	      					cout<<"\n\nEnter a number...";
	      					cin>>a;
	      					
							result1=sqrt(a);
	      					cout<<"\n\nResult = "<<result1<<endl;
	      					system("pause");
	      					break;
	     				}
	
	    			}
	           break;
	         }
	
	  	}	
	}while(choice != '5');

 return 0;
}
