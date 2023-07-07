//Practicing using maps
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
	//Declare map
	unordered_map<string, int> course_num;
	unordered_map<string, string> course_name;
	unordered_map<string, string> course_time;
	string user_input;
	
	//Input course number data
	course_num.insert(make_pair("CS101", 3004));
	course_num.emplace("CS103",4501);
	course_num["CS103"] = 6755;
	course_num.insert(make_pair("NT110", 1244));
	course_num.emplace("CM241", 1411);

	//Input course name data
	course_name.insert(make_pair("CS101", "Haynes"));
	course_name.emplace("CS103", "Alvarado");
	course_name["CS103"] = "Rich";
	course_name.insert(make_pair("NT110", "Burke"));
	course_name.emplace("CM241", "Lee");
	
	//Course time data
	course_time.insert(make_pair("CS101", "8:00 a.m"));
	course_time.emplace("CS103", "9:00 a.m");
	course_time["CS103"] = "10:00 a.m";
	course_time.insert(make_pair("NT110", "11:00 a.m"));
	course_time.emplace("CM241", "1:00 p.m");

	//Display instructions to user and get input from user
	cout << "COURSER" << endl;
	cout << "=======" << endl;
	cout << "Welcome to courser!\n";
	cout << "To view course information, please input the course number.\n";
	cout << "Course Number:";
	//Get user input
	getline(cin, user_input);

	//Validate input
	while(course_num.find(user_input) == course_num.end())
	{
		cout << "\n!ERROR! Invalid course number selected\n";
		cout << "Select from the following course numbers:\n";
		for(auto element : course_num)
		{
			cout << element.first << endl;
		}
		cout << "Input Course Number:";
		getline(cin, user_input);
	}

	//Display data
	cout << "\n\nHere is the course information for " << user_input << "\n";
	cout << "========================================\n";
	cout << "Course Number  : " << course_num.at(user_input) << endl;
	cout << "Instructor Name: " << course_name.at(user_input) << endl;
	cout << "Class Time     : " << course_time.at(user_input) << endl;

	cout << "\n\n\nThank You For Using Courser\n\n\n";



	return 0;
}