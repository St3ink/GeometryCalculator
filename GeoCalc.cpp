/*
Title: Chapter 4 Exercise 23 - Geometry Calculator
File Name: GeoCalc.cpp
Programmer: Kason Steiner
Date: 10/2024
Write a program that displays a menu allowing the user to select a shape, and then calculates and displays the area of the selected shape. It must not allow the use of negative numbers and show an error message if the user enters an invalid option in the selection menu.
*/  

#include <iostream>

using namespace std;
int main() { 

  int choice;
  double length;
  double width;
  double height;
  double radius;
  double base;
  double area = 0;
  const double PI = 3.14159;

  do{
  cout << "-------------------\n";
  cout << "Geometry Calculator\n";
  cout << "1. Calculate the Area of a Circle\n" 
       << "2. Calculate the Area of a Rectangle\n"
       << "3. Calculate the Area of a Triangle\n"
      << "4. Quit\n";
  cout << "Enter your choice (1-4): ";
  cin >> choice;
  cout << "\n";

    
  switch(choice)
    {
      case 1:
          cout << "Please enter the radius of the circle: ";
          cin >> radius;
        if (radius <= 0)
          cout << "Invalid input. Please enter a positive number.\n\n";
        else{
          area = PI * radius * radius;
          cout << "The area of the circle is: " << area << "\n\n";
        }
            break; 
      case 2:
          cout << "Please enter the length of the rectangle: ";
          cin >> length;
          cout << "Please enter the width of the rectangle: ";
          cin >> width;
        if (length <= 0 || width <= 0)
          cout << "Invalid input. Please enter positive numbers.\n\n";
        else {
          area = length * width;
          cout << "The area of the rectangle is: " << area << "\n\n";
        }
            break;
      case 3:
        cout << "Please enter the base of the triangle: ";
        cin >> base;
        cout << "Please enter the height of the triangle: ";
        cin >> height;
        if (base <= 0 || height <= 0)
          cout << "Invalid input. Please enter positive numbers.\n\n";
        else{
          area = base * height * 0.5;
          cout << "The area of the triangle is: " << area << "\n\n";
        }
            break;
      case 4:
        cout << "Program ended.\n";
        exit(0);
            break;

      default:
        cout << "Invalid choice. Please choose 1, 2, 3, or 4.\n\n";
    }
    
  }while (choice !=4);

  
return 0;
}