#include <iostream>

using namespace std;

#include <iostream>
#include <algorithm>

using namespace std;


class Person {
public:
Person(string first, string last)
: firstName(first), lastName(last)
{}

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

//YOUR_CODE
bool operator < (const Person &p){
  if(lastName == p.lastName){
    return firstName < p.firstName;
  }
  
  return lastName < p.lastName;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

string toString() const {
return lastName + ", " + firstName;
}

private:
string firstName;
string lastName;
};

int main()
{
Person people[] = {
{"Anna", "Smith"},
{"Christian", "Garcia"},
{"Charles", "Johnson"},
{"Becca", "Johnson"},
{"Dave", "Garcia"},
};

//0 - Smith is not < Garcia
cout << (people[0] < people[1]) << endl;

//1 - Garcia < Johnson
cout << (people[4] < people[3]) << endl;

//1 - Johnson == Johnson and Becca < Charles
cout << (people[3] < people[2]) << endl;


//sort the array - only works if < is defined for Person
sort(people, people + 5);
cout << people[0].toString() << endl;
}