#include <iostream> 
class UserString			//my basic thought is that by placing the user's string in a class above the main, it will clean up the main body of my code
{
private:					//so by putting it in a priate sub-class then i should not be able to accidentally change the value of the string in the main body of code. Gotta love safety nets
	int string;				//thinking back on it, the program does need to change the value of the user string, so would it be better to hold it in a public sub-class? 
public:
	char homestuck[];
};							//or would it be easier to give permission to the functions?

char homestuck() //i couldnt think of a name. i'll change it away from Homestuck later. 
{
	std::cout << "enter a string holding only letters." << std::endl;
	std::cin >> homestuck[];
}
int main()
{

	system("pause");
	return 0;
}
//I need to write a program that accepts a user input string.
//what I want to do is cout instructions to the user asking for a string consisting of all letters and then press enter.
//after the string is given to the program, a list of commands, as they follow below.
//if the user inputs a number, the program will cout the character at that index ((if the string is "Homestuck" and the user inputs 4, the character 's' should print out))
//if the user inputs 'a', the program should cout the strings length
//if the user inputs 'b', their string should be compared to another string class
//if the user inputs 'c', ?????
//if the user inputs 'd', ?????
//if the user inputs 'e', ?????
//if the user inputs 'f', their string should be translated into all lowercase letters
//if the user inputs 'g', their string should be translated into all uppercase letters
//if the user inputs 'h', the program should search for a sub-string within their string ((whatever that means))
//if the user inputs 'i', the program should ask for a number from the user and then search for a sub-string within their string starting at the number the user input
//if the user inputs 'j', the program should replace a sub-string within their string with a new sub-string the user inputs.
//if the user inputs 'q', the program should quit
/*what i will need to do:
1.	The ability to query the string's length, returning an intiger
2.	The ability to access a character at a certain index within the string class
3.	The ability to compare if the string is the same as another string class
4.	The ability to append one string to another
5.	The ability to prepend one string to another
6.	The ability to return the string as a basic constant C-style string (const char*)
7.	The ability to convert the string to a duplicate containing all lowercase letters
8.	The ability to convert the string to a duplicate containing all uppercase letters
9.	The ability to find a sub-string within the string class
10.	The ability to find a sub-string within the string class, starting from a certain index within the string
11.	The ability to replace a sub-string found within the string with a different sub-string
12.	The ability to set the string to an input C-style string
*/	


//std::cout << "Enter a string consisting only of letters." << std::endl;	
	//std::cin >> UserString >> std::endl;										//here is where the user string will be input for the program to work with.
	//
