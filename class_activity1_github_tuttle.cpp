// Name: Riley TUttle
// Date: 1-5-26
//

#include <iostream>
#include <string>

using namespace std;

// classes

class Dog
{
private:
    string name, breed;
    int age;

public:

    // setter functions
    void setName(string n)
    {
        name = n;
    }

    void setBreed(string b)
    {
        breed = b;
    }

    void setAge(int a)
    {
        age = a;
    }

    // getter functions
    string getName()
    {
        return name;
    }

    string getBreed()
    {
        return breed;
    }

    int getAge()
    {
        return age;
    }

    // bark function
    void bark()
    {
        cout << "Woof! Woof!" << endl;
    }


};


int main()
{
    Dog dog1;

    // setting attributes
    dog1.setName("Rufus");
    dog1.setBreed("Golden Retriever");
    dog1.setAge(2);

    // display data 
    cout << "------------- Dog Information ------------" << endl;
    cout << "Dog Name: " << dog1.getName() << endl;
    cout << "Dog Breed: " << dog1.getBreed() << endl;
    cout << "Dog Age: " << dog1.getAge() << endl;

    // update age using setter
    dog1.setAge(4);

    // updated age
    cout << "Updated dog age: " << dog1.getAge();
    dog1.bark();

	// test comment to push to github


    return 0;
}

