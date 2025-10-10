#include <iostream>
#include <string>

class Hello {
public:
    Hello() : messages(nullptr), size(0) {
        std::cout << "Constructor" <<std::endl;
    }
    Hello(int n) : size(n) {
        std::cout << "Constructor with arguments" << std::endl;
        //Dynamically allocate an array of strings
        messages = new std::string[n];
        //Initialize an array
        for (int i = 0; i < n; i++) {
            messages[i] = (i % 2 == 0) ? "Welcome!" : "Not welcome!";
        }
    }

    //Copy constructor
    Hello(const Hello& other) {
        std::cout << "Copy Constructor\n";
        //Allocate a new array
        //Copy the elements from other.messages to messages
    }

    //Destructure
    ~Hello() {
        delete [] messages;
    }

    void bye(void) {
        std::cout << "Bye!" << std::endl;
    }

    void printGreetings() const {
        for(int i = 0; i < size; i++) {
            std::cout << messages[i] << std::endl;
        }
    }

private:
    std::string *messages;//array of string
    int size; //the size of an array of strings  

};

void test(Hello h) {
    std::cout << "Test\n";
}  

int main(void) {
    //Create an object dynamically
    Hello *hi = new Hello;

    //Access printGreetings method
    hi->printGreetings();

    //Access bye method
    hi->bye();
    

    /*
    for (int i = 0; i < 100; i++) {
        Hello(9999999);
    }
    */

    Hello hi2(100);
    Hello hi3 = hi2;
    test(*hi);

    //Deallocate memory
    delete hi;

    return 0;
}