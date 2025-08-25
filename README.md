
🔹 Program 1: Constructor Defined Inside the Class
📝 AIM:

To write a C++ program that demonstrates the use of a constructor defined inside the class to input and display student details.

💻 Software Used:

VS Code

📚 Theory:

A constructor is a special member function in C++ that is invoked automatically when an object is created. In this program, the constructor is defined within the class definition. This allows direct initialization of data members (roll number, name, and fee) as soon as the object is declared.

The program uses:

A class student with private data members.

A constructor to accept input from the user.

A display() function to print the student details.

When the object s is created in the main() function, the constructor is automatically called, collecting the required input. The display() function is then called to output the values.

✅ Conclusion:

This program clearly demonstrates the use of a constructor defined inside the class to initialize object data. It highlights the automatic invocation of constructors and the basics of encapsulation in object-oriented programming.

🔹 Program 2: Constructor Defined Outside the Class
📝 AIM:

To write a C++ program that demonstrates the use of a constructor defined outside the class to input and display student details.

💻 Software Used:

VS Code

📚 Theory:

In this version of the program, the constructor is declared inside the class and defined outside using the scope resolution operator (::). This approach helps to keep the class interface clean and separates implementation details.

The program includes:

A class student with private members for roll number, name, and fee.

A constructor defined outside the class to gather input.

A display() function (also defined outside) to show the entered data.

When the object s is instantiated in main(), the constructor is automatically called. This takes input from the user, and then the display() function outputs the stored information.

✅ Conclusion:

This program effectively demonstrates how to define a constructor outside the class, maintaining the same functionality while improving code structure. It reinforces the concept of class design and the role of constructors in initializing objects in C++.

Program 3 : 

AIM:
To write a C++ program that demonstrates the use of a constructor defined inside the class to input and display student data including name, roll number, department, and batch.

Software Used:

VS Code

Theory:

In object-oriented programming with C++, a constructor is a special member function that is automatically called when an object of the class is created. It is typically used to initialize object data members.

In this program:

A class Data is defined with data members: name, roll_no, dept, and batch.

The constructor is defined inside the class to accept user input for all the data members.

A member function display() is defined to output the stored details.

When an object d1 of the class Data is created in the main() function, the constructor is automatically invoked, taking input from the user. The display() function then prints the entered values.

✅ Conclusion:

This program demonstrates how a constructor defined inside a class can be used to automatically initialize object data at the time of creation. It reinforces the basic understanding of constructors and object initialization in C++.

Program 4: 
AIM:
To write a C++ program that demonstrates the use of a copy constructor by copying data from one object to another.

Software Used:

VS Code

Theory:

In C++, a copy constructor is a special constructor used to create a new object as a copy of an existing object. It is particularly useful when:

Objects need to be passed by value.

We want to manually control how the data is copied, especially for pointer or array members.

Key Concepts in the Program:

The class student contains:

Private data members: roll number, name (character array), and fee.

A parameterized constructor to initialize object data.

A copy constructor to copy values from another student object.

A display() function to output the data.

In main():

Object s is created using the parameterized constructor.

Object manjeet is created using the copy constructor, which copies all values from s.

Both objects then display their values using the display() method.

✅ Conclusion:

This program successfully demonstrates how a copy constructor works in C++. It shows how one object (manjeet) can be initialized with the values of another object (s) at the time of creation. Understanding copy constructors is essential for efficient memory management and correct behavior in object-oriented programs involving complex data.

Program 5:
AIM:

To write a C++ program that demonstrates the use of a parameterized constructor to compare two numbers and display the greater one.

Software Used:

VS Code

Theory:

In C++, a parameterized constructor is a constructor that takes arguments and allows the programmer to initialize objects with specific values at the time of their creation.

Explanation of the Program:

A class Num is defined with a parameterized constructor that takes two integers (c and d).

Inside the constructor, a simple if-else condition checks which number is greater and displays it.

In the main() function, an object n1 is created using the statement Num n1(4, 3);. This automatically calls the parameterized constructor with values 4 and 3.

The constructor executes the comparison and prints the greater number.

This program does not use any data members — it only uses constructor parameters for immediate logic execution.

✅ Conclusion:

This program demonstrates the use of a parameterized constructor to perform operations based on values passed during object creation. It shows how constructors can not only initialize objects but also be used to embed logic that runs when the object is created.
