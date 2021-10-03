#include <iostream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include<cmath>

using namespace std;
int OptionMenu();
int Basic_Cpp_Programs();
int Decision_Making_Cpp_Programs();
int Looping_Cpp_Programs();
int Cpp_Functions_Programs();
int go_back_to_the_previous_menu();
int go_back_to_the_previous_menu2();
int go_back_to_the_previous_menu3();
int go_back_to_the_previous_menu4();
int go_back_to_the_main_menu();
int exit_System();
int guess();
void Hello_World();
int addition();
int subtraction();
int division();
int multiplication();
int area_and_perimeter_of_circle();
int temperature_conversion();
int loan_interest();
int average_examination_mark();
int file_size();
int Point_of_sale();
int Sales_rep_earnings();
int payroll();
int student_marks();
int sales_rep_commission();
int volume_of_cylinder();
int sum_average_product();
int Is_Number_Even_Or_Odd();
int months_of_the_year();
int alpha_letters();
int museum_age_fee();
int wages();
int discount_on_customer();
int Display_squares();
int Sum_and_average_of_odd_numbers();
int Numbers_in_reverse();
int Print_Multiple_Table();
int Cubes_of_numbers();
int Numbers_between_100_and_200_divisible_by_9();
int Integer_loop();
int natural_numbers();
int not_multiples_of_7();
int cost_of_five_products();
int even_n_numbers();
int odd_n_numbers();
float area_triangle();
float area_square();

string full_name, name, password;
#define Pi 3.142
#define PI 3.142
#define HOURS 3600


int main()
{

    system("COLOR 8");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout << "        #          #     eeee     #     cccc      ####     m          m   ####### " << endl;
    cout << "        #          #    e     e   #    c    c    #    #    m m      m m   #       " << endl;
    cout << "        #          #   e       e  #   c         #      #   m  m    m  m   #       " << endl;
    cout << "        #    ##    #   e       e  #   c         #      #   m   m  m   m   #       " << endl;
    cout << "        #   #  #   #   eeeeeeee   #   c         #      #   m    mm    m   ####### " << endl;
    cout << "        #  #    #  #   e          #   c         #      #   m          m   #       " << endl;
    cout << "        # #      # #    e      e  #    c    c    #    #    m          m   #       " << endl;
    cout << "        ##         #     eeeee    #     cccc      ####     m          m   ####### " << endl;
    cout<<endl;
    cout<<endl;

    cout<<"\n \n \t This is a product of the UZ_Computer Science group work project"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t Please enter your credentials to login to our excellent system \n \n \n"<<endl;
    cout<<"\t Enter first name only: ";
    cin>>name;
    cout<<endl;
    cout<<endl;
    cout<<"\t Please type in your Reg Number: ";
    cin>>full_name;
    cout<<endl;
    cout<<endl;
    cout<<"\t Enter the system password to proceed to the OPTION MENU: ";
    cin>>password;

    if(password=="uz")
    {

      cout<<"\n \n \n \n  \t Welcome: "<<name<<". You have been granted access to our System by the administrators \n \n \n \n \n";
      OptionMenu();

    } else

    cout<<"\n \nYou have entered a wrong password, this is where your session has ended, kindly press any key to shutdown the system and try again! \n";

}
int OptionMenu()
{

    int n;
    cout<<endl;
    cout<<"\t Enter a number to select the corresponding choice: \n "<<endl;
    cout<<"\t 1. Open Basic C++ Programs (Week 1 to 2) \n \n \t 2. Open Decision Making C++ Programs (Week 3 to 4) \n \n \t 3. Open Looping C++ Programs (Week 5 to 6) \n \n \t 4. Open Functions Program examples (Week 7 to 8) \n \n \t 5. Open Arrays Programs (Week 9 to 10)\n \n \t 6. Open Files Programs (Week 11 to 12) \n \n \t 7. Exit System \n \n \n \n \n";
    cout<<"Enter your choice: ";
    cin>>n;
    switch(n)
    {
        case 1: Basic_Cpp_Programs();
        break;
        case 2: Decision_Making_Cpp_Programs();
        break;
        case 3: Looping_Cpp_Programs();
        break;
        case 4: Cpp_Functions_Programs();
        break;
        case 7: exit_System();
        default : cout<<"\n \n \n You have chosen to end your session, hit any key to shutdown and try our system again later !!! \n \n \n \t########## THANK YOU "<<full_name<<" FOR USING OUR SYSTEM ########## \n \n \n";
        break;
    }

}
int guess()
{
  int number=10,x;

  while(x!=number)

  {
    cout<<"Guess The Number"<<endl;

      cin>>x;

      if(x>number)
      {
        cout<<"You have entered a number that is greater than the expected number, PLEASE TRY AGAIN \n";

      }
      else if(x<number)
      {
        cout<<"You have entered a number that is less than the expected number, PLEASE TRY AGAIN \n";

      }else
      {
          cout<<"Well Done: "<<name<<" You have guessed correctly \n Thank you for playing with us, try some other stuff with our awesome system \n";

      }
  }

}
int Basic_Cpp_Programs()
{
    int n;
    cout<<"\n \tYou have selected the basic C++ programs \n \n ";
    cout<<"\n \tYou now have to choose a program to run from our list of programs \n";
    cout<<"\t1.Hello world \n \t2.Add two Numbers \n \t3.Subtract two Numbers \n \t4.Divide two Numbers \n \t5.Multiply two Numbers \n \t6.Area and perimeter of a circle \n \t7.Temperature conversion \n \t8.Loan Interest \n \t9.Average examination mark \n \t10.Serial transmission \n \t11.Point of sale system \n \t12.Sales Rep monthly earnings \n \t13.Payroll System \n \t14.Volume of a cylinder \n \t15.Sum, Average, And Product of three real numbers \n \t16.Main Menu \n \n \n";
    cout<<"Enter your choice: ";
    cin>>n;
    switch (n)
    {
        case 1: Hello_World();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 2: addition();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 3: subtraction();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 4: division();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 5: multiplication();        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 6: area_and_perimeter_of_circle();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 7: temperature_conversion();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 8: loan_interest();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 9: average_examination_mark();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 10: file_size();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 11: Point_of_sale();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 12: Sales_rep_earnings();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 13: payroll();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 14: volume_of_cylinder();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 15: sum_average_product();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu();
        break;
        case 16: go_back_to_the_main_menu();
        break;
        default: cout<<"\n You have entered a choice that does not exist, please try our system again using the choices given. Thank you!!!";
        break;
    }
}
void Hello_World()
{
    cout<<"\n \nHello World"<<endl;
}

 int addition()
 {
     int a,b,c;
     cout<<"\n Enter the first number: ";
     cin>>a;
     cout<<"\n Enter the second number: ";
     cin>>b;
     c = a+b;
     cout<<"\n \n The result of addition of the two numbers is: "<<c<<endl;
 }
 int subtraction()
 {
     int a,b,c;
     cout<<"\n Enter the first number: ";
     cin>>a;
     cout<<"\n Enter the second number: ";
     cin>>b;
     c=a-b;
     cout<<"\n \n The result of addition of the two numbers is: "<<c<<endl;
 }
 int division()
 {
     int a,b,c;
     cout<<"\n Enter the first number: ";
     cin>>a;
     cout<<"\n Enter the second number: ";
     cin>>b;
     c=a/b;
     cout<<"\n \n The result of addition of the two numbers is: "<<c<<endl;
 }
 int multiplication()
 {
     int a,b,c;
     cout<<"\n Enter the first number: ";
     cin>>a;
     cout<<"\n Enter the second number: ";
     cin>>b;
     c=a*b;
     cout<<"\n \n The result of addition of the two numbers is: "<<c<<endl;
 }

int area_and_perimeter_of_circle()
{
	float radius,area_circle,perimeter_circle;

	cout<<"enter radius of circle\n";
	cin>>radius;
	area_circle=PI*radius*radius;
	cout<<"the area is"<<area_circle<<endl;
	perimeter_circle=2*PI*radius;
	cout<<"the perimeter is"<<perimeter_circle<<endl;

}

int temperature_conversion()

{
	float fah, cel;
	cout<<"Enter temperature in Fahrenheit : ";
	cin>>fah;
	cel=(fah-32) / 1.8;
	cout<<"Temperature in Celsius = "<<cel;

}

int loan_interest()
{
	float I,A,P,R,r1,T;
	cout<<"enter the amount of loan :"<<endl;
	cin>>P;
	cout<<"enter the Rate"<<endl;
	cin>>r1;
	cout<<"enter the Duration in years "<<endl;
	cin>>T;
	R = (r1/100);
	if(P>0&&R>0&&T>0){
	I=P*R*T;
	A=(1+(R*T))*P;
cout<<"Interest is :"<<I<<endl;
cout<<"Total accrued amount is :"<<A<<endl;
	}

}

int average_examination_mark()
{
 int maths,inter_science,tonga,building_studies,english,total_mark;
 float average_mark;

 cout<<"Enter the value for Maths"<<endl;
 cin>>maths;
 cout<<"Enter the value for Inter Science"<<endl;
 cin>>inter_science;
 cout<<"Enter the value for Tonga"<<endl;
 cin>>tonga;
 cout<<"Enter the value for Building Studies"<<endl;
 cin>>building_studies;
 cout<<"Enter the value for English"<<endl;
 cin>>english;
 {
 	total_mark=maths+inter_science+tonga+building_studies+english;

 	average_mark=total_mark/5;
 }
 cout<<"The average Examination Mark is: "<<average_mark;

}

int file_size()
{
	float filesize;
	float time_taken;
	double bytes;
	double charPerSec;

	cout <<"Enter file size in MB: ";
	cin>> filesize;
	//The numbers of bytes is equal to the number of characters

	bytes = (pow(2,10)*filesize);
    cout << "\nThe number of characters are: "<<bytes<<endl;
    charPerSec = bytes/960;

    time_taken= charPerSec * HOURS;
    cout<<"Time taken was: "<<time_taken<<" seconds"<<endl;

}

int Point_of_sale()
{
    int items, unit_price,total_price, v_a_t,grand_total;
   cout<<"\n Enter the number of items: ";
   cin>>items;
   cout<<"\n Enter the unit price: ";
   cin>>unit_price;
   total_price = items * unit_price;
   v_a_t = (0.15 * total_price)+1;
   grand_total = total_price + v_a_t;
   cout<<"\n The total price is: "<<total_price;
   cout<<"\n The value added tax is: "<<v_a_t;
   cout<<"\n The grand price is: "<<grand_total;
   cout<<endl;

}

int Sales_rep_earnings()
 {
  int salary;
  float commission,monthly_earning,total_sales;

  cout<<"Enter the Total Sales: ";
  cin>>total_sales;
  {
  	 salary=150;
     commission=0.1*total_sales;
     monthly_earning=commission+salary;
  }

  cout<<"\n \nThe Monthly Earning is: "<<monthly_earning;


}

int payroll()
{
	string name;

	float HW,HR,Allowances=0,NS,Deductions=0,GS=0;

	cout<<"\nenter your name pliz: ";
	cin>>name;
	cout<<"\nenter number of hours worked: ";
	cin>>HW;
	cout<<"\nenter hourly rate: ";
	cin>>HR;
	GS=HW*HR;
	cout<<"\ngross salary is :";
	Deductions=GS-(0.05*0.02*0.03)*GS;
	cout<<"\nDeductions on your salary are :"<<Deductions<<endl;
	Allowances=GS-(0.05*0.2)*GS;
	cout<<"Allowances are :"<<Allowances<<endl;
	NS=GS+Allowances-Deductions;
	cout<<"Net salary is :"<<NS<<endl;

}

int volume_of_cylinder()
{
	float radius,height,volume;

	cout<<"Enter the Radius: "<<endl;
	cin>>radius;
	cout<<"Enter the Height: "<<endl;
	cin>>height;
	{
		volume=Pi*pow(radius,2)*height;
	}
	cout<<"The Volume of the Cylinder is: "<<volume;

}

int sum_average_product()
{
	int num1,num2,num3,sum,aver,prod;

	cout<<"Enter Three numbers"<<endl;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	sum=num1+num2+num3;
	cout<<"Sum : "<<sum<<endl;
	aver=(num1+num2+num3)/3;
	cout<<"Average : "<<aver<<endl;
	prod=num1*num2*num3;
	cout<<"Product : "<<prod<<endl;

}

int go_back_to_the_previous_menu()
{
    int n;
    cout<<"\n Enter 10 to go back to the previous menu: ";
    cin>>n;
    switch (n)
    {
        case 10: Basic_Cpp_Programs();
        break;
        default: cout<<"\n Sorry you should have entered 10, now you have to start again ";
        break;
    }
}

int go_back_to_the_previous_menu2()
{
    int n;
    cout<<"\n Enter 10 to go back to the previous menu: ";
    cin>>n;
    switch (n)
    {
        case 10: Decision_Making_Cpp_Programs();
        break;
        default: cout<<"\n Sorry you should have entered 10, now you have to start again ";
        break;
    }
}

int go_back_to_the_previous_menu3()
{
    int n;
    cout<<"\n Enter 10 to go back to the previous menu: ";
    cin>>n;
    switch (n)
    {
        case 10: Looping_Cpp_Programs();
        break;
        default: cout<<"\n Sorry you should have entered 10, now you have to start again ";
        break;
    }
}


int go_back_to_the_previous_menu4()
{
    int n;
    cout<<"\n Enter 10 to go back to the previous menu: ";
    cin>>n;
    switch (n)
    {
        case 10: Cpp_Functions_Programs();
        break;
        default: cout<<"\n Sorry you should have entered 10, now you have to start again ";
        break;
    }
}

int go_back_to_the_main_menu()
{
    int n;
    cout<<"\n Are you sure you want to go to the main menu? If you are certain type '1': ";
    cin>>n;
    switch (n)
    {
        case 1: OptionMenu();
        break;
        default: cout<<"\n Sorry you should have entered 10, now you have to start again ";
        break;
    }
}

int exit_System()
{
    int n;
    cout<<"\n \tARE YOU SURE YOU WANT TO LEAVE OUR SYSTEM ?, IF YES, PRESS 1: ";
    cin>>n;
    switch(n)
    {
        case 1:return 0;
        break;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    }
}

int Decision_Making_Cpp_Programs()
{
    int n;
    cout<<"\n \tYou have selected the Decision_Making_C_Programs \n \n ";
    cout<<"\n \tYou now have to choose a program to run from our list of programs \n";
    cout<<"\t1.Student`s Marks \n \t2.Sales representative commission \n \t3.Is number EVEN or ODD \n \t4.Wages \n \t5.Operation using alphabetical letters \n \t6.Months of the year \n \t7.Museum Charges \n \t8.Discount on type of customer\n \t9.Main Menu \n \n \n";
    cout<<"Enter your choice: ";
    cin>>n;
    switch (n)
    {
        case 1: student_marks();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 2: sales_rep_commission();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 3: Is_Number_Even_Or_Odd();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 4: wages();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 5: alpha_letters();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 6: months_of_the_year();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 7: museum_age_fee();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 8: discount_on_customer();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu2();
        break;
        case 9: go_back_to_the_main_menu();
        break;
        default: cout<<"\n You have entered a choice that does not exist, please try our system again using the choices given. Thank you!!!";
        break;
    }
}

int sales_rep_commission()
{
   int sales;
   float commission;
   cout<<"\n Enter the sales for the month:"<<endl;
   cin>>sales;
   if(sales<100)
   {
       commission=sales*0.03;
   }
   else if(sales>=100&&sales<=200)
   {
       commission=sales*0.05;
   }
   else if (sales>=201&&sales<=500)
   {
       commission=sales*0.07;
   }
   else
   {
       commission=sales*0.1;
   }
   cout<<"\n The commission is: "<<commission<<endl;

}

int student_marks()
{
	int x;

	float avarege;


	cout<< "Enter Mark:\t\t\n";
	cin >> x;
	if(x>=80 && x<= 100){
		cout<<"DISTINCTION:\n";
	}
	else if(x>71 && x< 80){
		cout<<"MERIT: \n";
	}
	else if(x>61 && x< 70){
		cout<<"CREDIT: \n";

	}
	else if(x> 50 && x< 60){
		cout<<"PASS: \n";
	}
	else if(x<50 && x>0)
	 {
		cout<<"FAIL: \n";

	}
	else
	 cout << "Invalid entry";



}


int alpha_letters()
{
    int a,b,c;
    char n;
    cout<<"enter two numbers \n";
    cin>>a>>b;
    cout<<"enter choice\n A\n S\n D\n M\n L\n";
    cin>>n;
   switch(n)
   {
       case 'A':c=a+b;
    cout<<"the addition is\n"<<c;
    break;
    case 'S':c=a-b;
    cout<<"the difference is \n"<<c;
    break;
    case 'D':c=a*b;
    cout<<"the product is \n"<<c;
    break;
    case 'M':c=a/b;
    cout<<"the result of division+ is \n"<<c;
    break;
    case'L':c=a%b;
    cout<<"the modulus is \n"<<c;
    break;
    default:cout<<"invalid \n";
    break;
    }

}


int Is_Number_Even_Or_Odd()
{
   int n;
   cout<<"\n Enter a number: ";
   cin>>n;
   if(n%2==1)
   {
       cout<<"\n The number is odd"<<endl;
   }else
   {
       cout<<"\n The number is even"<<endl;
   }

}

int months_of_the_year()
{
   int n;
   string c;

   cout<<"\n Enter any number between 1 and 12; "<<endl;
   cin>>n;

 switch(n)
 {
 case 1 : c="January";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 2 : c="February";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 3 : c="March";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 4 : c="April";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 5 : c="May";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 6 : c="June";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 7 : c="July";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 8 : c="August";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 9 : c="September";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 10 : c="October";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 11 : c="November";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 case 12 : c="December";
     cout<<"\n The corresponding month is: "<<c<<endl;
 break;
 default: cout<<"\n Invalid entry"<<endl;
 }

}

int museum_age_fee()
{
   int age;
   double charge;
   cout<<"\n Enter visitor`s age; "<<endl;
   cin>>age;
   if(age>0&&age<18)
   {
       charge=1;
       cout<<"The charge is: "<<charge<<endl;
   }
   else if(age>=18 && age<=49)
   {
       charge=2;
       cout<<"The charge is: "<<charge<<endl;
   }
    else if(age>=50)
   {
       charge=0.5;
       cout<<"The charge is: "<<charge<<endl;
       }
   else cout<<"There is no such age!!, Please be serious !!"<<endl;


}

int wages()
{
double hours, overtimecal, overtime,hours1;
double hourly_wage,weekly_pay,overtime_pay,weekly_paywage;
cout<<"\n Enter the number of hours of work: ";
cin>>hours;
cout<<"\n Enter the hourly wage: ";
cin>> hourly_wage;


if(hours<=40)
{
    weekly_pay=hours*hourly_wage;
    cout<<"\n The Wage is: "<<weekly_pay<<endl;
}else if(hours>40)
{

    overtime=hours-40;
    overtimecal=overtime+overtime*0.5;
    overtime_pay=overtimecal*hourly_wage;
    hours1=hours-overtime;
    weekly_pay=hours1*hourly_wage;
    weekly_paywage=weekly_pay+overtime_pay;
    cout<<"\n The Wage is:"<<weekly_paywage<<endl;

}


}

int discount_on_customer()
{
	float discount,totalAmount,actualPrice;

	string customerType;

	cout<<"enter the type of customer \n";
	cin>>customerType;
	cout<<"enter the total amount\n";
	cin>>totalAmount;
	if(((customerType=="domestic")&&(totalAmount<=100))||(customerType=="foreigner"))
	{
	actualPrice=totalAmount-discount;
	cout<<"the amount after discount is "<<actualPrice;
	}
	else if((customerType=="domestic")&&(100<totalAmount<200))
	{
	discount=(0.04*totalAmount);
	actualPrice=totalAmount-discount;
	cout<<"discount = "<<discount<<endl<<"the amount after discount is "<<actualPrice;
	}
		else if((customerType=="foreigner")&&(100<=totalAmount<=200))
    {
   	discount=(0.06*totalAmount);
    actualPrice=totalAmount-discount;
   	cout<<"discount = "<<discount<<endl<<"the amount after discount is "<<actualPrice;
	}
	else if((customerType=="domestic")&&(200<=totalAmount<=500))
	{
	discount=(0.07*totalAmount);
	actualPrice=totalAmount-discount;
	cout<<"discount = "<<discount<<endl<<"the amount after discount is "<<actualPrice;
	}
	else if((customerType=="foreigner")&&(200<=totalAmount<=500))
	{
	discount=(0.08*totalAmount);
    actualPrice=totalAmount-discount;
   	cout<<"discount = "<<discount<<endl<<"the amount after discount is "<<actualPrice;
	}
	else if((customerType=="domestic")&&(totalAmount>500))
	{
	discount=(0.10*totalAmount);
	actualPrice=totalAmount-discount;
	cout<<"discount = "<<discount<<endl<<"the amount after discount is "<<actualPrice;
	}
	else if((customerType=="domestic")&&(totalAmount>500))
	{
	discount=(0.12*totalAmount);
	actualPrice=totalAmount-discount;
	cout<<"discount = "<<discount<<endl<<"the amount after discount is "<<actualPrice;
	}


}

int Looping_Cpp_Programs()
{
    int n;
    cout<<"\n \tYou have selected the Looping_C_Programs \n \n ";
    cout<<"\n \tYou now have to choose a program to run from our list of programs \n";
    cout<<"\t1.Factorial \n \t2.10 Integers, find biggest \n \t3.Sum and average of odd numbers \n \t4.Guess my number \n \t5.Print natural numbers \n \t6.Squares of numbers \n \t7.Numbers,0-100 except multiples of 7 \n \t8.Numbers in reverse \n \t9.Multiplication table \n \t10.Total cost of five products \n \t11.Even numbers and their sum \n \t12.Odd numbers and their sum \n \t13.Cubes of numbers \n \t14.Integers 100-200 divisible by 9 \n \t15.Main Menu \n \n \n ";
    cout<<"Enter your choice: ";
    cin>>n;
    switch (n)
    {
        case 1: Looping_Cpp_Programs();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 2: Integer_loop();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 3: Sum_and_average_of_odd_numbers();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 4: guess();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 5: natural_numbers();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 6: Display_squares();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 7: not_multiples_of_7();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 8: Numbers_in_reverse();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 9: Print_Multiple_Table();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 10: cost_of_five_products();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 11: even_n_numbers();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 12: odd_n_numbers();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 13: Cubes_of_numbers();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 14: Numbers_between_100_and_200_divisible_by_9();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu3();
        break;
        case 15:go_back_to_the_main_menu();
        break;
        default: cout<<"\n You have entered a choice that does not exist, please try our system again using the choices given. Thank you!!!";
        break;
    }
}

int odd_n_numbers()
{
  int n,i,sum=0;
  cout<<"Input the number of terms:";
  cin>>n;
  cout<<"The odd numbers are:";
  for(i=1;i<=n*2;i++)
  {
      if(i%2==1)
      {
          cout<<i<<" ";
          sum=sum+i;
      }
  }
  cout<<""<<endl;
  cout<<"The sum of odd Natural Number up to "<<n<<" terms:"<<sum<<endl;


}

int even_n_numbers()
{
  int n,i,sum=0;
  cout<<"Input the number of terms:";
  cin>>n;
  cout<<"The even numbers are:";
  for(i=1;i<=n*2;i++)
  {
      if(i%2==0)
      {
          cout<<i<<" ";
          sum=sum+i;
      }
  }
  cout<<""<<endl;
  cout<<"The sum of even Natural Number up to "<<n<<" terms:"<<sum<<endl;

}

int cost_of_five_products()
{
   int cost,i,total=0;
   cout<<"Enter cost of five products:"<<endl;

   for(i=1;i<=5;i++)
   {
       cin>>cost;

       total=total+cost;
   }
   cout<<"Total is:"<<total;

}

int not_multiples_of_7()
{
   int i;
   for(i=0;i<=100;i++)
   {
       if(i%7!=0)
       {
           cout<<i<<" , ";
       }
   }

}

int natural_numbers()
{
    int i=1,n;
    cout<<"Enter any number\n";
    cin>>n;
    do
    {
        cout<<i<<",";
    i++;
    }
    while(i<=n);


}

int Display_squares()
{
int i=1,ans,n;
cout<<"enter number"<<endl;
cin>>n;
do
{
    ans=i*i;
    cout<<i<<"*"<<i<<"="<<ans<<endl;
    i++;
}
 while(i<=n);


}

int Factorial()
{
    int x,i,fact=1;

    cout<< "Enter any Number"<<endl;
    cin>>x;

    for(i=1;i<=x;i++)
    {
       fact=fact*i;
    }
     cout<<"Your Factorial is:"<<fact<<endl;


}

int Sum_and_average_of_odd_numbers()
{
   int i=1,sum=0,average,cound=0;

   while(i<=10)
   {
       if(i%2==1)
       {
          cout<<i<<" , ";
        sum+=i;
        cound++;
       }
    i++;
   }
   average=sum/cound;

   cout<<"\n";
   cout<<"The SUM is:"<<sum<<endl;
   cout<<"The AVERAGE is:"<<average;

}

int Numbers_in_reverse()
{
   int i,x;
   cout<<"Enter a number"<<endl;
   cin>>x;
   for(i=x;i>=0;i-=2)
    {
        cout<<i<<endl;
    }

}

int Print_Multiple_Table()
{
    int i,x,ans;
    cout<<"Enter the number\n";
    cin>>x;
    for(i=1;i<=10;i++)
    {
        ans=x*i;
        cout<<x<<"*"<<i<<"="<<ans<<endl;
    }

}

int Cubes_of_numbers()
{
   int n,i;
   cout<<"Input the number terms:";
   cin>>n;
   for(i=1;i<=n;i++)
   {
      cout<<"Number is "<<i<<" and the cube of "<<i<<" is:"<<i*i*i<<endl;
   }


}

int Numbers_between_100_and_200_divisible_by_9()
{
  int i,sum=0;
  cout<<"Numbers between 100 and 200, divisible by 9: "<<endl;
  for(i=100;i<=200;i++)
  {
      if(i%9==0)
      {
          cout<<i<<" ";
          sum=sum+i;
      }
  }
  cout<<endl;
  cout<<"The Sum: "<<sum;

}

int Integer_loop()
{
    int i,x,biggest;

    cout<<"Enter 10 Integers \n";

    for(i=1;i<=10;i++)
    {
    cin>>x;
    if(x>biggest){
        biggest=x;
                }
    }
    cout<<"the biggest number is "<<biggest<<endl;

}

int Cpp_Functions_Programs()
{
    int n;
    cout<<"\n \tYou have selected the C++ Functions Programs \n \n ";
    cout<<"\n \tHere we are going to call functions that are in our system  \n";
    cout<<"\t1.Find the area of a triangle \n \t2.Find the area of the square \n \t3.Main Menu \n \n \n";
    cout<<"Enter your choice: ";
    cin>>n;
    cout<<endl;
    switch (n)
    {
        case 1: area_triangle();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 2: area_square();
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 3:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 4:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 5:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 6:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 7:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 8:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 9:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 10:
        cout<<"\n Your program has executed as expected \n"<<go_back_to_the_previous_menu4();
        break;
        case 11: go_back_to_the_main_menu();
        break;
        default: cout<<"\n You have entered a choice that does not exist, please try our system again using the choices given. Thank you!!!";
        break;
    }
}

float area_triangle()
{
	float base, height,area;
	cout<<"Enter the base of the triangle: ";
	cin>>base;
	cout<<endl;
	cout<<endl;
	cout<<"Enter the base of the triangle: ";
	cin>>height;

	area = 0.5 * base * height;
    cout<<"\n \nThe area of the triangle is: "<<area;
    cout<<endl;
}
float area_square()
{
	float area,side;
	cout<<"Enter the side of a square: "<<endl;
	cin>>side;
	area = side * side;
	cout<<"\n \nThe area of the square is: "<<area;
	cout<<endl;
	}



