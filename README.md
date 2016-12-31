# CPSC231-Lab2-
Lab 2 - The Submitted Version

Download the following zipped file.  It contains the project and codes files shown.
https://www.msu.edu/~bowmanm/231/Lab02. zip
•	Lab02.sln, Lab02.vcxproj, Lab02.vcxproj.filters
•	Lab03.cpp
•	Bushel.h
•	Bushel.cpp
1.	Create a workspace and compile and run the program.  You should see the output below:
A: 3 Apples 8 Oranges
B: 2 Apples 6 Oranges

2.	Add the function declaration below to Bushel.h:
class bushel
{ public:
    bushel();                  // Constructor - empty
    bushel(int,int);           // Constructor with counts
    bool get(istream &);       // Input
    void put(ostream &);       // Output
    bool equal(bushel);        // Compare to another bushel
  private:
    int apples;                // Apples in bushel
    int oranges;               // Oranges in bushel 
};

3.	Add the code below to Bushel.cpp to implement this function.  This will compare the apples in one bushel to the the apples in the other, and also compare the oranges.
// Bushel equal
bool bushel::equal(bushel b)
{ if(apples==b.apples && oranges==b.oranges)
    return true;
  else
    return false;
}

4.	Test your code by removing the /* Step 4 */ comments in Lab02.cpp.  Compile and run the program.  You should see the output below:
A: 3 Apples 8 Oranges
B: 2 Apples 6 Oranges
Bushel A != B

5.	Add two more class functions, named lesser() and greater(), to your Bushel.h and Bushel.cpp file.  They should use the following logic:
X is less than Y	X has less apples and X has less oranges than Y.
X is greater than Y	X has more apples and X has more oranges than Y.

6.	Test your code by removing the /* Step 6 */ comments in Lab02.cpp.  Compile and run the program.  You should see the output below:
A: 3 Apples 8 Oranges
B: 2 Apples 6 Oranges
Bushel A != B
Bushel A > B

7.	Convert your equal() function to an operator function by replacing the name of the function with operator ==.  Do this in both the Bushel.h and Bushel.cpp files.
 bool operator == (bushel);  // Compare to another bushel
Change the code in main() to use the == operator instead of the equal() function:
if(a.equal(b))		if(a==b)
Compile and run the program.  You should see the same output as in step 6.

8.	Convert your lesser() and greater functions() to operator functions.  Make appropriate changes in the main() function to use these operators in section 2.  Compile and run the program.  Again, you should see the same output as step 6.

9.	Test your code by removing the /* Step 9 */ comments in Lab02.cpp.  Compile and run the program with appropriate input to test each of the following cases:
	A == B
	A !=B
	A < B
	A > B
	Neither A==B, A<B, A>B is true

10.	Create three more operator functions that will compare the total number of fruit in the bushel to a single integer.  Add code to your main() function that will allow the user to input a number and compare both bushels to it.  Below is a sample output:
Enter bushel A (apples,oranges): 3 8
Enter bushel B (apples,oranges): 2 6

A: 3 Apples 8 Oranges
B: 2 Apples 6 Oranges
Bushel A != B
Bushel A > B

Enter total: 10

Bushel A != 10
Bushel A > 10
Bushel B != 10
Bushel B < 10

What to hand in
Print the final version of all three code files, your sample runs from step 9, and two runs from step 10.
