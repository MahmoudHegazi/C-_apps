#include<iostream>
#include<string>
using namespace std;


int main() {
   string user = "mazen";
   string pass = "123456";
   string welcome = "Hello Mr " + user;
   string bye = "Bye Mr wrong pass or User" + user;
   if (user == "mahmoud" && pass == "123456") {
   
   cout << welcome;
} else {
	if (user != "mahmoud" && pass != "123456") {
	
	cout << "wrong user and password";
 } 
  else if (user != "mahmoud" && pass == "123456" ) {
 	cout << "wrong user and correct password";
 }  else {
 	cout << "Correct User and Wrong password";
 }
 
}

   return 0;
}
