/*********************************
 * Bushel header
 * Created by Mark Bowman
 *********************************/

#include <iostream>
using namespace std;

class bushel
{ public:
    bushel();              // Constructor - empty
    bushel(int,int);       // Constructor with counts
    bool get(istream &);   // Input
    void put(ostream &);   // Output
	bool operator == (bushel); // Compare to another bushel 
	bool lesser(bushel);
	bool greater(bushel); 
	bool operator != (int); // Compare not to input integer. 
	bool operator > (int); // 
	bool operator < (int); 

  private:
    int apples;            // Apples in bushel
    int oranges;           // Oranges in bushel 
};
