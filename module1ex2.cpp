/*
#include<iostream>
#include<conio.h>
Standard namespace declaration
using namespace std;
Main Function
int main()
{
double myMoney = 1000.50; //this should be printed out
Standard Ouput Statement
cout"Please be sure to correct all syntax errors in this program"<<endl;
cout<<"I have corrected all errors for this program. <<endl;
cout<<" The total amount of money available is = "<< <<endl;
// Wait For Output Screen
Main Function return Statement
return 0;
}
*/

//original on top
//fixed version on bottom

#include<iostream>
#include<conio.h>
//Standard namespace declaration
using namespace std;
//Main Function
int main()
{
double myMoney = 1000.50; //this should be printed out
//Standard Ouput Statement
cout << "Please be sure to correct all syntax errors in this program"<<endl;
cout<<"I have corrected all errors for this program." <<endl;
cout << "The total amount of money available is = " << myMoney << endl;
//Wait For Output Screen
//Main Function return Statement
return 0;
}

/*
Lines 25,27,31 and 36 needed double slash // to indicate it was a comment 
line 32 it needed the << after the "cout" to start the sentence
line 33 was missing a paranthesis after the period of the sentence
line 34 was missing the myMoney variable after the first << to add the value after the sentance
*/